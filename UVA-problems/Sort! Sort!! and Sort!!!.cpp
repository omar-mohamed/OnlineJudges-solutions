//#include<iostream>
//#include<stdio.h>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct number
//{
//	long long num;
//	long long mod;
//};
//bool fastSort(number n2,number n1)
//{
//	if(n1.mod>n2.mod)
//		return true;
//	else if(n1.mod==n2.mod)
//	{
//		if((n1.num%2==0)&&((n2.num%2==1)||(n2.num%2==-1)))
//			return true;
//		else if((((n1.num%2==1)||((n1.num%2==-1)))&&((n2.num%2==1)||(n2.num%2==-1))))
//		{
//			if(n1.num<n2.num)
//				return true;
//			else
//				return false;
//		}
//		else if(n1.num%2==0&&n2.num%2==0)
//			{
//				if(n1.num>n2.num)
//					return true;
//				else 
//					return false;
//			}
//	}
//	return false;
//}
//int main()
//{
//	long long n,mod;
//	number input;
//	vector<number> inputs;
//	while(cin>>n>>mod)
//	{
//		if(n==0&&mod==0)
//		{
//			cout<<n<<" "<<mod<<endl;
//			break;
//		}
//		for(int i=0;i<n;i++)
//		{
//			cin>>input.num;
//			input.mod=input.num%mod;
//			inputs.push_back(input);
//		}
//		sort(inputs.begin(),inputs.end(),fastSort);
//
//cout<<n<<" "<<mod<<endl;
//for(int i=0;i<n;i++)
//{
//	cout<<inputs[i].num<<endl;
//}
//inputs.clear();
//	}
//	return 0;
//}




