//#include<iostream>
//using namespace std;
//int main()
//{
//	long long c=101,i=1,m=0,x=0;
//	long long* arr=new long long[c];
//	long long* sum=new long long[c];
//	while(cin>>c)
//	{
//		for(int j=0;j<c;j++)
//		{
//			cin>>arr[j];
//		}
//
//		for(int j=1;j<c;j++)
//		{
//			if(arr[j-1]>=arr[j] ||arr[0]==0 )
//			{
//				x++;
//				break;
//			}
//		}
//		if(x==0)
//		{
//			for(int j=0;j<c;j++)
//			{
//				for(int k=j;k<c;k++)
//				{
//					sum[m]=arr[j]+arr[k];
//					m++;
//				}
//			}
//			for(int j=0;j<m;j++)
//			{
//				for(int k=j+1;k<m;k++)
//				{
//
//					if(sum[j]==sum[k])
//					{
//						x++;
//						break;
//					}
//
//				}
//				if(x!=0)
//					break;
//			}
//		}
//		if(x==0)
//		{
//			cout<<"Case #"<<i<<": It is a B2-Sequence."<<endl;
//			cout<<endl;
//		}
//		else
//		{
//			cout<<"Case #"<<i<<": It is not a B2-Sequence."<<endl;
//			cout<<endl;
//		}
//		x=0;
//		m=0;
//		i++;
//
//	}
//	return 0;
//}

//

