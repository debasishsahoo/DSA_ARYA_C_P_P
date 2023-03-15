/*
Given two integers N and M, the task is to generate any N * M sized maze containing only 0 (representing a wall) and 1 (representing an empty space where one can move) with the entry point as P0 and exit point P1 and there is only one path between any two movable positions.

Note: P0 and P1 will be marked as 2 and 3 respectively and one can move through the moveable positions in 4 directions (up, down, right and left).

Examples:

Input: N = 5, M = 5, P0 = (0, 0), P1 = (4, 4)
Output: maze = [ [ 2 1 1 1 1 ],
                 [ 1 0 1 0 1 ],
                 [ 1 0 1 0 0 ],
                 [ 1 1 0 1 0 ],
                 [ 0 1 1 1 3 ] ]
Explanation: It is valid because there is no cycle,
and there is no unreachable walkable position.
Some other options could be
[ [ 2 1 1 1 1 ],
  [ 1 0 1 0 1 ],
  [ 1 0 1 0 0 ],
  [ 1 1 1 1 0 ],
  [ 0 0 0 1 3 ] ]
or
[ [ 2 1 1 0 1 ],
  [ 1 0 1 0 1 ],
  [ 1 0 1 0 0 ],
  [ 1 0 1 1 0 ],
  [ 1 0 0 1 3 ] ].
But these are not valid because in the first one there is a cycle in the maze
and in the second one (0, 4) and (1, 4) cannot be reached from the starting point.


Approach: The problem can be solved based on the following idea:

Use a DFS which starts from the P0 position and moves to any of the neighbour's but does not make a cycle and ends at P1. In this way, there will only be 1 path between any two movable positions.

Follow the below steps to implement the idea:

Initialize a stack (S) for the iterative DFS, the matrix that will be returned as the random maze.
Insert the entry point P0 into the stack.
While S is not empty, repeat the following steps:
Remove a position (say P) from S and mark it as seen.
If marking the position walkable, forms a cycle then don’t include it as a moveable position.
Otherwise, set the position as walkable.
Insert the neighbour's  of P which are not visited in random order into the stack.
Random insertion in the stack guarantees that the maze being generated is random.
If any of the neighbour's is the same as the P1 then insert it at the top so that we do not skip this position because of cycle formation.
Mark the initial position P0 (with 2) and final position P1 (with 3)
Return the maze.

*/

