//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
//void ToTernary(long long num);
//
//
//
//int main()
//{
//	long long num;
//	cin>>num;
//	while(num>=0)
//	{
//		ToTernary(num);
//		cin>>num;
//	}
//	return 0;
//}
//
//
//
//
//
//void ToTernary(long long num)
//{
//	 vector<int> ternary;
//	 do
//	 {
//		 if(num%3==1)
//			 ternary.push_back(1);
//		 else if(num%3==2)
//			 ternary.push_back(2);
//		 else
//			 ternary.push_back(0);
//		 num/=3;
//	 }while(num!=0);
//	 for(int i=ternary.size()-1;i>=0;i--)
//		 cout<<ternary[i];
//	 cout<<endl;
//}