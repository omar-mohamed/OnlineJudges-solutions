///* Dynamic Programming implementation of LCS problem */
//#include<stdio.h>
//#include<stdlib.h>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//  
///* Returns length of LCS for X[0..m-1], Y[0..n-1] */
//int L[7][8];
//int lcs( char *X, char *Y, int m, int n )
//{
//  // vector<vector<int> > L;
//  //  L.resize(m+1);
//  //  for(int i = 0; i < m+1; i++)
//		//L[i].resize(n+1);
//
//    int i, j;
//   /* Following steps build L[m+1][n+1] in bottom up fashion. Note
//      that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] */
//   for (i=0; i<=m; i++)
//   {
//     for (j=0; j<=n; j++)
//     {
//       if (i == 0 || j == 0)
//         L[i][j] = 0;
//  
//       else if (X[i-1] == Y[j-1])
//         L[i][j] = L[i-1][j-1] + 1;
//  
//       else
//         L[i][j] = max(L[i-1][j], L[i][j-1]);
//     }
//   }
//    
//   /* L[m][n] contains length of LCS for X[0..n-1] and Y[0..m-1] */
//   return L[m][n];
//}
//  
//  
///* Driver program to test above function */
//int main()
//{
//  char X[] = "AGGTAB";
//  char Y[] = "GXTXAYB";
//  
//  int m = strlen(X);
//  int n = strlen(Y);
//  
//  printf("Length of LCS is %d\n", lcs( X, Y, m, n ) );
//  
//  getchar();
//  return 0;
//}