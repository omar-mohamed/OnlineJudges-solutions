//#include<iostream>
//using namespace std;
//int arr[1026][1026]={0};
//int main(){
//	int cases,strength,num_populations,x,y,size,startX,startY;
//	cin>>cases;
//	for(int i=0;i<cases;i++)
//	{
//		int max_x=0,max_y=0,max_size=0;
//		cin>>strength;
//		cin>>num_populations;
//		for(int j=0;j<num_populations;j++)
//		{
//			cin>>x>>y>>size;
//			startX=x-strength;
//			startY=y-strength;
//			if(startX<0)
//				startX=0;
//			if(startY<0)
//				startY=0;
//			for(int l=startX;l<=strength+x && l<1025;l++)
//				for(int p=startY;p<=strength+y && p<1025;p++)
//					arr[l][p]+=size;
//		}
//			for(int l=0;l<1025;l++)
//				for(int p=0;p<1025;p++)
//				{
//					if(arr[l][p]>max_size)
//					{
//						max_size=arr[l][p];
//						max_x=l;
//						max_y=p;
//					}
//					arr[l][p]=0;
//				}
//				cout<<max_x<<" "<<max_y<<" "<<max_size<<endl;
//		}
//	return 0;
//}