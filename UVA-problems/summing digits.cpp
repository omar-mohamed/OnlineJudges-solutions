//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	long long n,z,y,x,sum=0,sum2=0,sum3=0;
//	cin>>n;
//	while(n>0)
//	{
//
//		for(int i=0;i<100;i++)
//		{
//			x=n/10;
//			y=x*10;
//			z=abs(y-n);
//			sum+=z;
//			n=n/10;
//			if(n==0)
//			{
//		for(int j=0;j<100;j++)
//		{
//			n=sum;
//			x=n/10;
//			y=x*10;
//			z=abs(y-n);
//			sum2+=z;
//			sum=sum/10;
//			if(sum==0)
//			{
//				for(int k=0;k<100;k++)
//				{
//				n=sum2;
//				x=n/10;
//				y=x*10;
//				z=abs(y-n);
//				sum3+=z;
//				sum2=sum2/10;
//				if(sum2==0)
//					break;
//				}
//			}
//		}
//			}
//
//			}
//		cout<<sum3<<endl;
//		sum=0;
//		sum2=0;
//		sum3=0;
//		cin>>n;
//}
//	return 0;
//}


//another solution


//#include<iostream>
//#include<string>
//#include<sstream>
//using namespace std;
//int main ()
//{
//int sum=0;
//string Mystring;
//stringstream ss;
//cin>>Mystring;
//while(Mystring!="0")
//{
//int size=Mystring.size();
//for(int j=0;j<100;j++)
//{
//for(int i=0;i<size;i++)
//{
//char sub=Mystring[i];
//int num=sub-'0';	
//sum+=num;
//}
//if(sum>9)
//{
//	/*Mystring=to_string(sum);*/
//	ss<<sum;
//	Mystring=ss.str();
//	size=Mystring.size();
//	sum=0;
//	ss.str(string());
//}
//else
//	break;
//}
//cout<<sum<<endl;
//sum=0;
//ss.str(string());
//cin>>Mystring;
//}
//return 0;
//}