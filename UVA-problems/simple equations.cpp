//#include<iostream>
//using namespace std;
//int main()
//{
//	int a,b,c,t,x,y,z;
//	int finalz,finaly,finalx;
//	cin>>t;
//	for (int i=0;i<t;i++)
//	{
//		cin>>a>>b>>c;
//		finalz=10000000,finaly=10000000,finalx=10000000;
//		bool solution=false;
//		for(int k=-100;k<101;k++)
//		{
//			x=k;
//		for (int j=-100;j<101;j++)
//		{
//			y=j;
//			z=a-x-y;
//			if(x+y+z==a && x*y*z==b && x*x+y*y+z*z==c && x!=y && y!=z && x!=z)
//			{
//				solution=true;
//				if(finalx>x)
//				{
//					finalx=x;
//					finaly=y;
//					finalz=z;
//				}
//				else if (finalx==x)
//				{
//					if(finaly>y)
//					{
//						finaly=y;
//						finalz=z;
//						finalx=x;
//					}
//				}
//			}
//		}
//		}
//		if (solution)
//			cout<<finalx<<" "<<finaly<<" "<<finalz<<endl;
//		else
//			cout<<"No solution."<<endl;
//
//	}
//	return 0;
//
//}


