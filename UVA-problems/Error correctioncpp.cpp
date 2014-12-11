//#include<iostream>
//using namespace std;
//void check(int arr[][105],int& test,int n);
//void error(int arr[][105],int& test, int n,int& x,int& y);
//int main()
//{
//	int n;
//	int arr[105][105],test=0,x,y;
//	cin>>n;
//	while(n!=0)
//	{
//		for(int i=0;i<n;i++)
//		{
//			for(int j=0;j<n;j++)
//			{
//				cin>>arr[i][j];
//			}
//		}
//		check(arr,test,n);
//		if(test==0)
//			cout<<"OK"<<endl;
//		
//		else
//		{
//			error(arr,test,n,x,y);
//			if(test==0)
//			cout<<"Change bit ("<<x+1<<","<<y+1<<")"<<endl;
//			else
//				cout<<"Corrupt"<<endl;
//		}
//		test=0;
//		x=0;
//		y=0;
//        cin>>n;
//	}
//	return 0;
//}
//
//
//
//void check(int arr[][105],int& test, int n)
//{
//	int sum=0,sum2=0;
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			sum+=arr[i][j];
//		}
//		if(sum%2!=0)
//			break;
//	}
//   for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			sum2+=arr[j][i];
//		}
//		if(sum2%2!=0)
//			break;
//	}
//   if(sum%2==0&&sum2%2==0)
//	   test=0;
//   else
//	   test=1;
//}
//
//void error(int arr[][105],int& test, int n,int& x,int& y)
//{
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			if(arr[i][j]==0)
//			{
//				arr[i][j]=1;
//				check(arr,test,n);
//				arr[i][j]=0;
//				if(test==0)
//				{
//					x=i;
//					y=j;
//					break;
//				}
//			}
//			else if(arr[i][j]==1)
//			{
//				arr[i][j]=0;
//				check(arr,test,n);
//				arr[i][j]=1;
//				if(test==0)
//				{
//					x=i;
//					y=j;
//					break;
//				}
//			}
//		}
//		if(test==0)
//			break;
//	}
//}