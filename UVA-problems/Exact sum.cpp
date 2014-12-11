//
//#include<cmath>
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,money,arr[10001],def,book1,book2;
//	while(cin>>n)//n 3dd el kotb
//	{
//		def=1000000;//or money
//		for(int s=0 ;s<n ;s++)//loop for array
//		{
//			cin>>arr[s];
//		}
//		cin>>money;
//		for(int i=0 ;i<n-1 ;i++)//bymsk ktab
//		{
//			for(int j=i+1 ;j<n ;j++)//bymsk ele b3do
//			{
//				if(arr[i]+arr[j]==money && abs(arr[i]-arr[j])<def)
//				{
//					book1=arr[i];
//					book2=arr[j];
//					def=abs(arr[i]-arr[j]);
//				}
//			}
//		}
//		if(book1<=book2)
//			cout<<"Peter should buy books whose prices are " <<book1<<" and "<<book2<<"."<<endl;//a3rf el so8yr b3den el kber
//		else
//			cout<<"Peter should buy books whose prices are " <<book2<<" and "<<book1<<"."<<endl;
//		cout<<endl;
//	}
//	return 0;
//}

//#include <cmath>
//#include<iostream>
//using namespace std;
//int main()
//{
//int n,m,arr[100000],book1,book2,diff;
//int min =10000;
//while(cin>>n)
//{
//for(int i=0;i<n;i++)
//cin>>arr[i];
//min=10000000;
//cin>>m;
//for(int i=0;i<n-1;i++)
//{
//for(int j=i+1;j<n;j++)
//{
//diff=abs(arr[i]-arr[j]);
//if(diff<min && arr[i]+arr[j]==m)
//{
//min=diff;
//book1=arr[i];
//book2=arr[j];
//}
//}
//}
//if(book1<book2)
//cout<<"Peter should buy books whose prices are"<<" "<<book1<<" "<<"and"<<" "<<book2<<"."<<endl;
//else
//cout<<"Peter should buy books whose prices are"<<" "<<book2<<" "<<"and"<<" "<<book1<<"."<<endl;
// cout<<endl;
// 
//}
//return 0;
//}