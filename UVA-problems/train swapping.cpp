//#include<iostream>
//using namespace std;
//int main()
//{
//	int c,n=50,tmp,count=0;
//	int* arr=new int[n];
//	cin>>c;
//	for(int i=1;i<=c;i++)
//	{
//		cin>>n;
//		for(int j=0;j<n;j++)
//		{
//			cin>>arr[j];
//		}
//		for(int j=1;j<n;j++)
//		{
//			for(int k=0;k<j;k++)
//			{
//				if(arr[k]>arr[j])
//				{
//					tmp=arr[k];
//					arr[k]=arr[j];
//					arr[j]=tmp;
//					count++;
//				}
//				}
//			}
//		cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
//		count=0;
//		}
//}