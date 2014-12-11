///#include<stdio.h>
//#include<stdlib.h>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int change[] = {0,1, 3, 5};
//
//
//int coinChange(int coins,int change_size)
//{
//	vector<vector<int> > arr;
//	arr.resize(coins+1);
//	for(int i=0;i<coins+1;i++)
//		arr[i].resize(change_size);
//
//	for (int j = 0; j < coins+1; j++)
//   {
//	   for (int  i= 0; i < change_size; i++)
//       {
//		   if(j==0)
//			   arr[j][i]=0;
//		   else if(i==0)
//			   arr[j][i]=1000000;
//		   else if(j<change[i])
//			   arr[j][i]=arr[j][i-1];
//		   else
//			   arr[j][i]=min(arr[j][i-1],arr[j-change[i]][i]+1);
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