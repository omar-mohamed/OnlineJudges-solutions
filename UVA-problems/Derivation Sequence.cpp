//#include<iostream>
//using namespace std;
//int a[100];
// void DerivativeSequence(int index,int size,int order)
//{
//	if(order==0)
//		return;
//	else if(index+1<=size-1)
//	{
//		a[index]=(a[index+1]-a[index]);
//	    DerivativeSequence(index+1,size,order);
//	}
//	else
//		DerivativeSequence(0,size-1,order-1);
//}
//
//int main()
//{
//	int size,order;
//	while(cin>>size>>order)
//	{
//		for(int i=0;i<size;i++)
//			cin>>a[i];
//		DerivativeSequence(0,size,order);
//		for(int i=0;i<size-order;i++)
//		{
//			cout<<a[i];
//			if(i<(size-order)-1)
//				cout<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}