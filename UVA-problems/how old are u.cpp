//#include<iostream>
//#include<stdio.h>
//#include<cmath>
//using namespace std;
//int main()
//{
//	int D,M,Y,d,m,y,n,age;
//	cin>>n;
//	for(int i=1;i<=n;i++)
//	{
//		scanf("%d/%d/%d%d/%d/%d",&D,&M,&Y,&d,&m,&y);
//		if((Y<y)||((y==Y)&&(M<m))||((y==Y)&&(M==m)&&(D<d)))
//		{
//			cout<<"Case #"<<i<<": Invalid birth date"<<endl;
//		}
//		else
//		{
//			age=abs(y-Y);
//				if(y<=Y)
//				{
//					if(m<M)
//					{
//						 if(age>130)
//				                 cout<<"Case #"<<i<<": Check birth date"<<endl;
//						 else 
//							 cout<<"Case #"<<i<<": "<<age<<endl;
//					}
//					else if (m==M)
//					{
//						if(d>D)
//						{
//							age=age-1;
//				           if(age>130)
//				                 cout<<"Case #"<<i<<": Check birth date"<<endl;
//						   else
//						   {
//							  if(age>130)
//				                  cout<<"Case #"<<i<<": Check birth date"<<endl;
//							     cout<<"Case #"<<i<<": "<<age<<endl;
//						   }
//						}
//						else
//						{
//					        if(age>130)
//				                 cout<<"Case #"<<i<<": Check birth date"<<endl;
//							else
//								cout<<"Case #"<<i<<": "<<age<<endl;
//						}
//					}
//					else
//					{
//						age=age-1;
//						if(age>130)
//				             cout<<"Case #"<<i<<": Check birth date"<<endl;
//						else
//							 cout<<"Case #"<<i<<": "<<age<<endl;
//					}
//				}
//				else
//				{
//					if(age>130)
//				             cout<<"Case #"<<i<<": Check birth date"<<endl;
//					else
//						cout<<"Case #"<<i<<": "<<age<<endl;
//				}
//			}
//		}
//	return 0;
//	}




//#include<iostream> 
//using namespace std; 
//int main() 
//{ 
//	int t; 
//	long long D1,D2,M1,M2,Y1,Y2,currentdate,date,diff,answ; 
//	char slach1,slach2; 
//	cin>>t; 
//	for(int i=1;i<=t;i++) 
//	{ 
//		cin>>D1>>slach1>>M1>>slach2>>Y1; 
//		cin>>D2>>slach1>>M2>>slach2>>Y2; 
//		currentdate=D1+M1*30+Y1*12*30;
//		date=D2+M2*30+Y2*12*30; 
//		diff=currentdate-date; 
//		answ=diff/360; 
//		if(diff<0) 
//		{ 
//			cout<<"Case #" <<i <<": " <<"Invalid birth date" <<endl; 
//		} 
//		else if(answ>130) 
//		{ 
//			cout<<"Case #" <<i <<": " <<"Check birth date"<<endl; 
//		} 
//		else 
//		{ 
//			cout<<"Case "<<"#" <<i <<": " <<answ<<endl; 
//		} 
//	} 
//	return 0; 
//}


