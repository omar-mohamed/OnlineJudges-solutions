//#include<iostream>
//#include<map>
//#include<string>
//#include<iomanip>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	string line,tree;
//	int cases,count=0;
//	map<string,double> trees;
//	cin>>cases;
//	cin.ignore();
//	getline(cin,line);
//	for(int i=1;i<=cases;i++)
//	{
//	while(getline(cin,tree)&&tree!="")
//	{
//		trees[tree]++;
//		count++;
//	}
//	map<string,double> ::iterator it=trees.begin();
//	while(it!=trees.end())
//	{
//		it->second=(it->second / count)*100;
//		cout<<it->first<<" "<<fixed<<setprecision(4)<<it->second<<endl;
//		it++;
//	}
//	if(i!=cases)
//		cout<<endl;
//	trees.clear();
//	count=0;
//	}
//	return 0;
//}