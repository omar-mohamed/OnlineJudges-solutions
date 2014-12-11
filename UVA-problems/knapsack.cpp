//#include<stdio.h>
//#include<stdlib.h>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int val[] = {60, 100, 120};
//int wt[] = {10, 20, 30};
//
//
//int knapSack(int bag_size,int v_size)
//{
//	vector<vector<int> > arr;
//	arr.resize(bag_size+1);
//	for(int i=0;i<bag_size+1;i++)
//		arr[i].resize(v_size);
//
//	//int arr[7][5];
//
//	for (int w = 0; w < bag_size+1; w++)
//   {
//	   for (int  j= 0; j < v_size; j++)
//       {
//		   if(w==0||j==0)
//			   arr[w][j]=0;
//		   else if(w<wt[j])
//			   arr[w][j]=arr[w][j-1];
//		   else
//			   arr[w][j]=max(arr[w][j-1],arr[w-wt[j]][j-1]+val[j]);
//       }
//   }
//	return arr[bag_size][v_size-1];
//
//}
//
//int main()
//{
//    int  bag_size = 50;
//    int v_size = sizeof(val)/sizeof(val[0]);
//	printf("%d\n", knapSack(bag_size,v_size));
//    return 0;
//}