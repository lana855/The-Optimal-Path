The Optimal Path

An entertaining game that related to the Discrete Mathematics concepts.
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

Concept & Rules

>	The game consists of a square grid, some of which 
are surrounded by walls ‘#’.
>	The game is about to find a path that connects 
two points (nodes) in the grid so that the sum of the edge on the path is the smallest possible number.
>	The algorithm can move in any direction (up, down, 
left, right and diagonal) within squares not surrounded by walls.
>	The algorithm cannot cross walls.
>	The game ends when the algorithm reaches the end point.
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

Implementation Details

>	Creating a 5x5 grid: A square grid of 5 rows and 5 columns is created. 
>	Randomly assigning walls: Walls are randomly assigned in the grid. The rand() function is used to generate random numbers.
> Entering the source point: The player is prompted to enter the coordinates of the source point (x, y). Entering the destination point: The player is prompted to enter the coordinates of the end point (x,y). 
> Show grid: The grid is displayed on the screen. 
>	Searching for the optimal path: The dijkstra function is used to search for the optimal path between the source and destination point. 
>	Show the optimal path: If a path is found, this part of the code will display the path on the screen. 
> Error message: If a path is not found, this part of the code will display an error message.
>	Notes: You can modify the size of the grid and the number of walls as you wish.
>	You can also modify the dijkstra function to search for other types of optimal paths, such as the shortest path or the fastest path. But in this code, I chose the shortest path algorithm.
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


Output Explanation

>	Grid: The grid is displayed on the screen. In this example, walls have been randomly assigned in the grid. 
>	Source point: The coordinates of the source point are displayed on the screen.
>	Destination point: The coordinates of the destination point are displayed on the screen.
>	Optimal path: The optimal path is displayed on the screen. In this example, the optimal path consists of 4 points (including source point and destination point).
Example of Grid:
   0 1 2 3 4
0  0 0 0 0 0
1  0 # 0 0 0
2  0 0 0 # 0
3  0 0 0 0 0
4  0 0 0 # 0
Source Point: (2, 1) , Destination Point: (4, 2)
Optimal Path: (2, 1) -> (2, 2) -> (3, 2) -> (4, 2)
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

Learning Resources

>	Websites:
GeeksforGeeks: https://www.geeksforgeeks.org/
TutorialsPoint: https://www.tutorialspoint.com/index.htm
Codecademy: https://www.codecademy.com/resources/docs/cpp

> Books:
Introduction to Algorithms by Thomas H. Cormen.
Graph Algorithms by S. Even.

> YouTube Channels:
Michael Sambol: https://www.youtube.com/@MichaelSambol

>	Courses:
Discrete Mathematics – AABU University.
That’s it!  I hope you have a fun time playing "The Optimal Path" game!

