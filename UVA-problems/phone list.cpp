//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//using namespace std;
//bool check(string s1, string s2)
//{
//	for(int i=0;i<s1.size();i++)
//	{
//		if(s1[i]!=s2[i])
//			return true;
//	}
//	return false;
//}
//int main()
//{
//	int n,c;
//	cin>>n;
//	string phone;
//	vector<string> s;
//	for(int i=0;i<n;i++)
//	{
//		cin>>c;
//		for(int j=0;j<c;j++)
//		{
//			cin>>phone;
//			s.push_back(phone);
//		}
//		sort(s.begin(),s.end());
//		bool found=false;
//			for(int k=1;k<s.size();k++)
//			{
//				if(!check(s[k-1],s[k]))
//				{
//					found=true;
//					break;
//				}
//		}
//		if(found)
//			cout<<"NO"<<endl;
//		else
//			cout<<"YES"<<endl;
//		s.clear();
//	}
//	return 0;
//}