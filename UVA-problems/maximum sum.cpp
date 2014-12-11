//#include<iostream>
//using namespace std;
//
//void kadane2D(int arr[][150],int n);
//void KadaneAlgorithm(int arr[], int n,int &max);
//
//
//int main()
//{
//	int arr[150][150],n;
//	cin>>n;
//	for(int i=0;i<n;i++)
//		for(int j=0;j<n;j++)
//			cin>>arr[i][j];
//	kadane2D(arr,n);
//}
//
//
//
//void kadane2D(int arr[][150],int n)
//{
//	int colsum[150];
//	int sum,max=0;
//	for(int i=0;i<n;i++)
//	{
//	for(int x=0;x<n;x++)
//		colsum[x]=0;
//		for(int j=i;j<n;j++)
//		{
//			for(int x=0;x<n;x++)
//			   colsum[x]+=arr[j][x];
//			KadaneAlgorithm(colsum,n,sum);
//			if(sum>max)
//				max=sum;
//		}
//
//	}
//
//	cout<<max<<endl;
//}
//
//void KadaneAlgorithm(int arr[], int n,int &maxsum)
//{
//    maxsum = 0;
//    int sum = 0;
//    for (int i = 0; i < n; i++)
//    {
//        sum += arr[i];
//
//        if(sum>maxsum)
//        {
//			maxsum = sum;
//        }
//
//        if(sum < 0)
//        {
//             sum=0;
//        }
//    }
//
//}
