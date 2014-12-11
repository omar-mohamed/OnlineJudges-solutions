//#include<stdio.h>
// 
//// Number of vertices in the graph
//#define V 3
//
//
//int color[250];
//void printSolution();
//
///* A utility function to check if the current color assignment
//   is safe for vertex v */
//bool isSafe (int v, bool graph[V][V], int c)
//{
//    for (int i = 0; i < V; i++)
//        if (graph[v][i] && c == color[i])
//            return false;
//    return true;
//}
// 
///* A recursive utility function to solve m coloring problem */
//bool graphColoringUtil(bool graph[V][V], int m, int v)
//{
//    /* base case: If all vertices are assigned a color then
//       return true */
//    if (v == V)
//        return true;
// 
//    /* Consider this vertex v and try different colors */
//    for (int c = 1; c <= m; c++)
//    {
//        /* Check if assignment of color c to v is fine*/
//        if (isSafe(v, graph, c))
//        {
//           color[v] = c;
// 
//           /* recur to assign colors to rest of the vertices */
//           if (graphColoringUtil (graph, m, v+1) == true)
//             return true;
// 
//            /* If assigning color c doesn't lead to a solution
//               then remove it */
//           color[v] = 0;
//        }
//    }
// 
//    /* If no color can be assigned to this vertex then return false */
//    return false;
//}
// 
///* This function solves the m Coloring problem using Backtracking.
//  It mainly uses graphColoringUtil() to solve the problem. It returns
//  false if the m colors cannot be assigned, otherwise return true and
//  prints assignments of colors to all vertices. Please note that there
//  may be more than one solutions, this function prints one of the
//  feasible solutions.*/
//bool graphColoring(bool graph[V][V], int m)
//{
//    // Initialize all color values as 0. This initialization is needed
//    // correct functioning of isSafe()
//    for (int i = 0; i < V; i++)
//       color[i] = 0;
// 
//    // Call graphColoringUtil() for vertex 0
//    if (graphColoringUtil(graph, m, 0) == false)
//    {
//      printf("Solution does not exist");
//      return false;
//    }
// 
//    // Print the solution
//    printSolution();
//    return true;
//}
// 
///* A utility function to print solution */
//void printSolution()
//{
//    printf("Solution Exists:"
//            " Following are the assigned colors \n");
//    for (int i = 0; i < V; i++)
//      printf(" %d ", color[i]);
//    printf("\n");
//}
// 
//// driver program to test above function
//int main()
//{
//    /* Create following graph and test whether it is 3 colorable
//      (3)---(2)
//       |   / |
//       |  /  |
//       | /   |
//      (0)---(1)
//    */
//    bool graph[V][V] = {{0, 1, 1},
//        {1, 0, 1},
//        {1, 1, 0}
//    };
//    int m = 4; // Number of colors
//    graphColoring (graph, m);
//    return 0;
//}