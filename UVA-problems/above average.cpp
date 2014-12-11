//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	int c,n=1003;
//	double avg=0,per,count=0;
//	double* arr=new double[n];
//	cin>>c;
//	for(int i=1;i<=c;i++)
//	{
//		cin>>n;
//		for(int j=0;j<n;j++)
//		{
//			cin>>arr[j];
//		}
//		for(int j=0;j<n;j++)
//		{
//			avg+=arr[j];
//		}
//		avg=avg/n;
//		for(int j=0;j<n;j++)
//		{
//			if(arr[j]>avg)
//				count++;
//		}
//		per=count/n;
//		per=per*100;
//		cout<<setprecision(3)<<fixed<<per<<"%"<<endl;
//		avg=0;
//		count=0;
//	}
//	return 0;
//}