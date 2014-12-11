//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<cmath>
//#include<stdlib.h>
//#include<vector>
//#include<sstream>
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	long long ind;
//	string index,arr,sub,buf,buf2,line;
//	vector<string> vindex;
//	vector<string> varry;
//	vector<long long> all_index;
//	cin.ignore();
//	for(int i=1;i<=n;i++)
//	{
//		long long x=0;
//		getline(cin,line);
//		getline(cin,index);
//		if(i>1)
//			cout<<endl;
//		stringstream ss(index);
//		while(ss>>buf)
//		{
//			vindex.push_back(buf);
//		}
//		for(int j=0;j<vindex.size();j++)
//		{
//			all_index.push_back(atol(vindex[j].c_str()));
//		}
//		
//		getline(cin,arr);
//		stringstream sa(arr);
//		while(sa>>buf2)
//		{
//			varry.push_back(buf2);
//			x++;
//		}
//		vector<string> ans(x);
//		for(int j=0;j<all_index.size();j++)
//		{
//			ans[all_index[j]-1]=varry[j];
//		}
//			for(int j=0;j<ans.size();j++)
//		{
//			cout<<ans[j]<<endl;
//		}
//			varry.clear();
//			vindex.clear();
//			ans.clear();
//			all_index.clear();
//			ss.str(string());
//			sa.str(string());
//		x=0;
//	}
//	return 0;
//}
//
//
