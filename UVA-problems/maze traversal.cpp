//#include<iostream>
//#include<algorithm>
//#include <string>
//using namespace std;
//void F(char arr[][65],int rows,int col,int &frow,int &fcol,int& dir);
//void L(int& dir);
//void R(int& dir);
//int main()
//{
//	char arr[65][65],op;
//	int rows,col,frow,fcol;
//	int cases,dir=0;
//	cin>>cases;
//	for(int p=1;p<=cases;p++)
//	{
//			cin>>rows>>col;
//			cin.ignore();
//		for(int i=0;i<rows;i++)
//		{
//				cin.getline(arr[i],65);			
//		}
//		cin>>frow>>fcol;
//		frow--;
//		fcol--;
//		do
//		{
//			cin>>op;
//			if(op=='F')
//				F(arr,rows,col,frow,fcol,dir);
//			else if(op=='R')
//				R(dir);
//			else if(op=='L')
//				L(dir);
//		}while(op!='Q');
//		cin.ignore();
//		cout<<frow+1<<" "<<fcol+1<<" ";
//		if(dir==0)
//			cout<<"N"<<endl;
//		else if(dir==1)
//			cout<<"E"<<endl;
//		else if(dir==2)
//			cout<<"S"<<endl;
//		else if(dir==3)
//			cout<<"W"<<endl;
//		dir=0;
//		if(p<cases)
//		cout<<endl;
//	}
//	return 0;
//}



//
//void F(char arr[][65],int rows,int col,int &frow,int &fcol,int& dir)
//{
//	if(dir==0)
//	{
//		if(arr[frow-1][fcol]==' ')
//			frow--;
//	}
//	else if(dir==1)
//	{
//		if(arr[frow][fcol+1]==' ')
//			fcol++;
//	}
//	else if(dir==2)
//	{
//		if(arr[frow+1][fcol]==' ')
//			frow++;
//	}
//	else if(dir==3)
//	{
//		if(arr[frow][fcol-1]==' ')
//			fcol--;
//
//	}
//
//}
//
//void L(int& dir)
//{
//		dir--;
//	if(dir<0)
//		dir=3;
//	
//}
//
//void R(int& dir)
//{
//	dir++;
//	if(dir>3)
//		dir=0;
//}


