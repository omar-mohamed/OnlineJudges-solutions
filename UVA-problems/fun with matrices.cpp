//#include<iostream>
//#include<stdio.h>
//using namespace std;
//void row(int x,int y,int** arr,int m)
//{
//	int tmp;
//		for(int j=0;j<m;j++)
//		{
//			tmp=arr[x-1][j];
//			arr[x-1][j]=arr[y-1][j];
//			arr[y-1][j]=tmp;
//		}
//}
//void col(int x,int y,int** arr,int m)
//{
//	int tmp;
//		for(int j=0;j<m;j++)
//		{
//			tmp=arr[j][x-1];
//			arr[j][x-1]=arr[j][y-1];
//			arr[j][y-1]=tmp;
//		}
//}
//void inc(int** arr,int m)
//{
//	for(int i=0;i<m;i++)
//	{
//		for(int j=0;j<m;j++)
//		{
//			arr[i][j]++;
//			if(arr[i][j]>9)
//				arr[i][j]=0;
//		}
//	}
//}
//void dec(int** arr,int m)
//{
//	for(int i=0;i<m;i++)
//	{
//		for(int j=0;j<m;j++)
//		{
//			arr[i][j]--;
//			if(arr[i][j]<0)
//				arr[i][j]=9;
//		}
//	}
//}
//void transpose(int** arr,int m)
//{
//	int tmp;
//	for(int i=0;i<m;i++)
//	{
//		for(int j=i;j<m;j++)
//		{
//			tmp=arr[i][j];
//			arr[i][j]=arr[j][i];
//			arr[j][i]=tmp;
//		}
//	}
//}
//int main()
//{
//	int m=20, c,ops,x,y;
//	char operation[10000];
//	int** arr=new int*[m];
//	for(int i=0;i<m;i++)
//		arr[i]=new int[m];	
//	cin>>c;
//	for(int i=1;i<=c;i++)
//	{
//		cin>>m;
//		for(int j=0;j<m;j++)
//		{
//			for(int k=0;k<m;k++)
//				scanf("%1d",&arr[j][k]);
//		}
//		cin>>ops;
//		for(int i=0;i<ops;i++)
//		{
//			cin>>operation;
//			if(operation[0]=='t'&&operation[1]=='r'&&operation[2]=='a'&&operation[3]=='n'&&operation[4]=='s'&&operation[5]=='p'&&operation[6]=='o'&&operation[7]=='s'&&operation[8]=='e')
//				transpose(arr,m);
//			else if(operation[0]=='r'&&operation[1]=='o'&&operation[2]=='w')
//			{
//				cin>>x>>y;
//				row(x,y,arr,m);
//			}
//			else if(operation[0]=='c'&&operation[1]=='o'&&operation[2]=='l')
//			{
//				cin>>x>>y;
//				col(x,y,arr,m);
//			}
//			else if(operation[0]=='i'&&operation[1]=='n'&&operation[2]=='c')
//				inc(arr,m);
//			else if(operation[0]=='d'&&operation[1]=='e'&&operation[2]=='c')
//				dec(arr,m);
//		}
//		cout<<"Case #"<<i<<endl;
//		for(int j=0;j<m;j++)
//		{
//			for(int k=0;k<m;k++)
//			{
//				cout<<arr[j][k];
//			}
//			cout<<endl;
//		}
//		cout<<endl;
//	}
//	return 0;
//}
//
//
