//#include<iostream>
//using namespace std;
//int main()
//{
//	int Three_square[50005][3]={0};
//	int sum,cases,num;
//	for(int i=0;i*i<=50000;i++)
//		for(int j=i;i*i+j*j<=50000;j++)
//			for(int k=j;i*i+j*j+k*k<=50000;k++)
//			{
//				sum=i*i+j*j+k*k;
//				if(!Three_square[sum][0]&&!Three_square[sum][1]&&!Three_square[sum][2])
//				{
//				Three_square[sum][0]=i;
//				Three_square[sum][1]=j;
//				Three_square[sum][2]=k;
//				}
//			}
//			cin>>cases;
//			for(int i=0;i<cases;i++)
//			{
//				cin>>num;
//				if(!Three_square[num][0]&&!Three_square[num][1]&&!Three_square[num][2])
//					cout<<"-1"<<endl;
//				else
//					cout<<Three_square[num][0]<<" "<<Three_square[num][1]<<" "<<Three_square[num][2]<<endl;
//			}
//	return 0;
//}

