//#include<iostream>
//#include<stdlib.h>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//vector<int> change;
//
//
//long long coinChange(int coins,int change_size)
//{
//	vector<vector<long long> > arr;
//	arr.resize(coins+1);
//	for(int i=0;i<coins+1;i++)
//		arr[i].resize(change_size);
//	long long x;
//	long long y;
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
//    int  coins;
//	for(int i=1;i<=21;i++)
//		change.push_back(i*i*i);
//	while(cin>>coins)
//	{
//		cout<< coinChange(coins,21)<<endl;
//	}
//    return 0;
//}