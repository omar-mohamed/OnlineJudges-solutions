
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,arr[10],count=0;
//	cin>>n;
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=0;j<10;j++)
//	       {
//			   cin>>arr[j];
//           }
//		if(arr[0]>=arr[1])
//		{
//			for(int j=1;j<10;j++)
//			{
//				if(arr[j-1]>=arr[j])
//				{
//					continue;
//				}
//				else{
//					count++;
//					break;
//				}
//			}
//		}
//		else
//		{
//			for(int j=1;j<10;j++)
//			{
//				if(arr[j-1]<=arr[j])
//				{
//					continue;
//				}
//				else{
//					count++;
//					break;
//				}
//			}
//		}
//		if(i==1)
//			cout<<"Lumberjacks:"<<endl;
//		if(count==0)
//			cout<<"Ordered"<<endl;
//		else
//			cout<<"Unordered"<<endl;
//		count=0;
//	}
//	return 0;
//
//}
//
