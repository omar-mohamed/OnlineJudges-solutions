//#include<iostream>
//#include<algorithm>
//#include <string>
//using namespace std;
//void A(char arr[][7],int &test2);
//void B(char arr[][7],int &test2);
//void L(char arr[][7],int &test2);
//void R(char arr[][7],int &test2);
//int main()
//{
//	char arr[7][7],op;
//	int test=0,test2=0,count=1;
//	while(true)
//	{
//		
//		for(int i=0;i<5;i++)
//		{
//
//				cin.getline(arr[i],7);			
//				if(strcmp(arr[0],"Z")==0)
//				{
//					test++;
//					break;
//				}
//		}
//		if(test>0)
//			break;
//		do
//		{
//			cin>>op;
//			if(op=='A')
//				A(arr,test2);
//			else if(op=='B')
//				B(arr,test2);
//			else if(op=='L')
//				L(arr,test2);
//			else if(op=='R')
//				R(arr,test2);
//		}while(op!='0');
//		cin.ignore();
//		if(count>1)
//			cout<<endl;
//		cout<<"Puzzle #"<<count<<":"<<endl;
//		if(test2==0)
//			{
//            for (int I=0 ; I<5 ; I++) {
//                for (int J=0 ; J<5 ; J++) {
//                    cout<<arr[I][J];
//                    if (J<4) {
//                        cout<<" ";
//                    }
//                }
//				cout<<endl;
//            }
//		}
//		else
//		{
//			cout<<"This puzzle has no final configuration."<<endl;
//		}
//		count++;
//		test2=0;
//	}
//	return 0;
//}
//
//
//
//
//void A(char arr[][7],int &test2)
//{
//	for(int i=0;i<5;i++)
//		for(int j=0;j<5;j++)
//		{
//			if(arr[i][j]==' ')
//			{
//				if(i-1>=0)
//				{
//				swap(arr[i][j],arr[i-1][j]);
//				break;
//				}
//				else
//				{
//					test2++;
//					break;
//
//				}
//			}
//		}
//}
//
//void B(char arr[][7],int &test2)
//{
//	int x=0;
//	for(int i=0;i<5;i++)
//	{
//		for(int j=0;j<5;j++)
//		{
//			if(arr[i][j]==' ')
//			{
//				if(i+1<=4)
//				{
//				swap(arr[i+1][j],arr[i][j]);
//				x++;
//				break;
//				}
//				else
//				{
//					x++;
//					test2++;
//					break;
//				}
//			}
//		}
//		if(x>0)
//			break;
//		}
//}
//
//void L(char arr[][7],int &test2)
//{
//	for(int i=0;i<5;i++)
//		for(int j=0;j<5;j++)
//		{
//			if(arr[i][j]==' ')
//			{
//				if((j-1)>=0)
//				{
//				swap(arr[i][j],arr[i][j-1]);
//				break;
//				}
//				else
//				{
//					test2++;
//					break;
//				}
//				
//			}
//		}
//}
//
//void R(char arr[][7],int &test2)
//{
//	for(int i=0;i<5;i++)
//		for(int j=0;j<5;j++)
//		{
//			if(arr[i][j]==' ')
//			{
//				if(j+1<=4)
//				{
//				swap(arr[i][j+1],arr[i][j]);
//				break;
//				}
//				else
//				{
//					test2++;
//					break;
//				}
//			}
//		}
//}