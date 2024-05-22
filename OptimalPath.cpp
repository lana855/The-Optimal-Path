#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// distance between two points function
int distance(pair<int, int> point1, pair<int, int> point2) {
    return abs(point1.first - point2.first) + abs(point1.second - point2.second);//the difference between the contiguous pairs always equals one;
}

// display grid function
void printGrid(const vector<vector<int>>& grid) {
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            if (grid[i][j] == -1) {
                cout << "#"; //  print wall "#"
            }
            else {
                cout << grid[i][j];
            }
            cout << " ";
        }
        cout << endl;
    }
}

// find the shortest path using Dijkstra's algorithm function
vector<pair<int, int>> dijkstra(vector<vector<int>>& graph, int startX, int startY, int endX, int endY) {
    // Array to save distances from the source to each point
    vector<vector<int>> distances(graph.size(), vector<int>(graph[0].size(), INT_MAX));

    // Array to save the previous path for each point
    vector<vector<pair<int, int>>> previous(graph.size(), vector<pair<int, int>>(graph[0].size(), { 0, 0 }));

    // save the unvisited points list;
    priority_queue<pair<int, pair<int, int>>> queue;

    // add source and destination point in queue
    queue.push({ 0, {startX, startY} });

    // assign new path to source point
    distances[startX][startY] = 0;

    while (!queue.empty()) {
        //remove the points with shortest distance from queue
        int currentDistance = queue.top().first;
        pair<int, int> current = queue.top().second;
        queue.pop();

        // recalculate the path when we reach the destination
        if (current.first == endX && current.second == endY) {
            vector<pair<int, int>> path;
            pair<int, int> node = current;

            while (node.first != startX || node.second != startY) {
                path.push_back(node);
                node = previous[node.first][node.second];
            }

            path.push_back({ startX, startY });
            reverse(path.begin(), path.end());
            return path;
        }

        // check the surrounded points
        for (int dx = -1; dx <= 1; ++dx) {
            for (int dy = -1; dy <= 1; ++dy) {
                if (dx == 0 && dy == 0) continue;

                int nextX = current.first + dx;
                int nextY = current.second + dy;

                // check if the surrounded point is included in grid
                if (nextX < 0 || nextX >= graph.size() || nextY < 0 || nextY >= graph[0].size()) continue;

                // check if it's not surrounded with walls '#'
                if (graph[nextX][nextY] == -1) continue;

                // calculate the surrounded point distance
                int nextDistance = currentDistance + distance({ current.first, current.second }, { nextX, nextY });

                // if the calculated distance is shorter, assign it
                if (nextDistance < distances[nextX][nextY]) {    // nextdistance--> current;
                    distances[nextX][nextY] = nextDistance;
                    previous[nextX][nextY] = current;
                    queue.push({ nextDistance, {nextX, nextY} });
                }
            }
        }
    }

    // if no path found
    return {};
}

int main() {

    // implement 5*5 grid
    vector<vector<int>> grid(5, vector<int>(5, 0));

    // assign walls randomly
    srand(time(NULL));
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++) {
            if (rand() % 2 == 0) {
                grid[i][j] = -1;//wall
            }
        }
    }
    printGrid(grid);
    cout << "------------------------------------\n";
    // enter source point
    int startX, startY;
    cout << "Enter source point location (x, y) : ";
    cin >> startX >> startY;

    // enter destination point
    int endX, endY;
    cout << "Enter Destination point location (x, y) : ";
    cin >> endX >> endY;
    cout << "------------------------------------\n";

    // display grid
    printGrid(grid);

    // find the optimal path
    vector<pair<int, int>> path = dijkstra(grid, startX, startY, endX, endY);

    // show the optimal path
    if (!path.empty()) {

        cout << "------------------------------------\n";
        cout << "The Optimal Path : ";

        for (int i = 0; i < path.size(); ++i) {
            if (i == 0) {
                cout << "(" << path[i].first << "," << path[i].second << ")";
            }
            else {
                cout << " -> (" << path[i].first << "," << path[i].second << ")";
            }
        }
        cout << endl;
        cout << "Great Job! :D\n";
    }
    else {

        cout << "------------------------------------\n";
        cout << "No path found :/ " << endl;
        cout << "Try Again!\n";

    }

    return 0;
}