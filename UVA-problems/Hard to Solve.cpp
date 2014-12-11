//#include<iostream>
//using namespace std;
//int arr[105];
//void Search(int length,int num)
//{
//	if(length==0)
//	{
//		cout<<"NO"<<endl;
//		return;
//	}
//	else if(arr[length-1]==num)
//	{
//		cout<<"YES"<<endl;
//	}
//	else
//		return Search(length-1,num);
//}
//
//int main()
//{
//	int cases,length,num;
//	cin>>cases;
//	for(int i=1;i<=cases;i++)
//	{
//		cin>>length;
//		for(int j=0;j<length;j++)
//			cin>>arr[j];
//		cin>>num;
//		cout<<"Case "<<i<<": ";
//		Search(length,num);
//	}
//	return 0;
//}