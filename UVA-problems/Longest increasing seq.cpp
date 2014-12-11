//#include<stdio.h>
//#include<stdlib.h>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
//int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
///* lis() returns the length of the longest increasing subsequence in
//    arr[] of size n */
////DP
//int lis(int n )
//{
//vector<int> lis;
//lis.assign(n,1);
//int max=0;    
//   /* Compute optimized LIS values in bottom up manner */
//   for (int i = 1; i < n; i++ )
//      for (int j = 0; j < i; j++ )
//         if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)
//            lis[i] = lis[j] + 1;
//    
//   /* Pick maximum of all LIS values */
//   for (int i = 0; i < n; i++ )
//      if ( max < lis[i] )
//         max = lis[i];
// 
//   return max;
//}
//
///* Driver program to test above function */
//int main()
//{
//  int n = sizeof(arr)/sizeof(arr[0]);
// // printf("Length of LIS is %d\n", lis( n ) );
//  printf("Length of LIS is %d\n", lis(n) );
//  return 0;
//}


