//#include<stdio.h>
//#include<stdlib.h>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int change[] = {1, 3, 5};
//
//
//int coinChange(int coins,int change_size)
//{
//	vector<vector<int> > arr;
//	arr.resize(coins+1);
//	for(int i=0;i<coins+1;i++)
//		arr[i].resize(change_size);
//	int x;
//	int y;
//	for (int j = 0; j < coins+1; j++)
//   {
//	   for (int  i= 0; i < change_size; i++)
//       {
//		   if(j==0)
//			   arr[j][i]=1;
//		   else
//		   {
//			   if(j>=change[i])
//				   x=arr[j - change[i]][i];
//			   else
//				   x=0;
//			   if(i >= 1)
//				   y=arr[j][i-1];
//			   else
//				   y=0;
//            arr[j][i] = x + y;
//		   }
//       }
//   }
//	return arr[coins][change_size-1];
//}
//
//int main()
//{
//    int  coins = 8;
//	int change_size = sizeof(change)/sizeof(change[0]);
//	printf("%d\n", coinChange(coins,change_size));
//    return 0;
//}