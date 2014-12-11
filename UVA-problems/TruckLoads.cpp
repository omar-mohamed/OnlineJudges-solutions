//#include<iostream>
//using namespace std;
//long long NumOfTrucks(long long Crates,long long Capacity)
//{
//	if(Crates<=Capacity)
//	{
//		return 1;
//	}
//	else 
//	{
//		if(Crates%2==0)
//			return NumOfTrucks(Crates/2,Capacity)+NumOfTrucks(Crates/2,Capacity);
//		else
//		    return NumOfTrucks(Crates/2,Capacity)+NumOfTrucks((Crates/2)+1,Capacity);
//	}
//
//
//}
//
//int main()
//{
//	long long Crates,Capacity;
//	while(cin>>Crates>>Capacity)
//	{
//		    cout<<NumOfTrucks(Crates,Capacity)<<endl;
//	}
//	return 0;
//}