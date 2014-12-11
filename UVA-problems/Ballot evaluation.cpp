//#include<iostream>
//#include<map>
//#include<vector>
//#include<cctype>
//#include<sstream>
//#include<string>
//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int parties,guesses;
//	string party;
//	//stringstream ss(party);
//	string op;
//	char dot;
//	int per;
//	int sum=0;
//	map<string,int> m;
//	vector<string> v;
//	while(cin>>parties>>guesses)
//	{
//	for(int i=0;i<parties;i++)
//	{
//		int beforeDot,afterDot;
//		cin>>party;
//		cin>>beforeDot>>dot>>afterDot;
//		per=beforeDot*10+afterDot;
//		m[party]=per;
//	}
//	getchar();
//	for(int i=0;i<guesses;i++)
//	{
//		sum=0;
//		string buf;
//		getline(cin,party);
//		stringstream ss(party);
//		ss<<party;
//		while(ss>>buf)
//			v.push_back(buf);
//		for(int j=0;j<v.size()-1;j++)
//		{
//		if(isalnum(v[j][0]))
//			sum+=m[v[j]];
//		else
//		{
//			if(v[j][0]!='+')
//			{
//				op=v[j];
//				per=atoi(v[j+1].c_str());
//				per*=10;
//				if(op=="<")
//	               {
//		             if(sum<per)
//						cout<<"Guess #"<<i+1<<" was correct."<<endl;
//					 else
//						cout<<"Guess #"<<i+1<<" was incorrect."<<endl;
//	               }
//				else if(op=="<=")
//				{
//					if(sum<=per)
//						cout<<"Guess #"<<i+1<<" was correct."<<endl;
//					else
//						cout<<"Guess #"<<i+1<<" was incorrect."<<endl;
//				}
//				else if(op==">")
//				{
//					if(sum>per)
//						cout<<"Guess #"<<i+1<<" was correct."<<endl;
//					else
//						cout<<"Guess #"<<i+1<<" was incorrect."<<endl;
//				}
//				else if(op==">=")
//				{
//					if(sum>=per)
//						cout<<"Guess #"<<i+1<<" was correct."<<endl;
//					else
//						cout<<"Guess #"<<i+1<<" was incorrect."<<endl;
//				}
//				else if(op=="=")
//				{
//					if(sum==per)
//						cout<<"Guess #"<<i+1<<" was correct."<<endl;
//					else
//						cout<<"Guess #"<<i+1<<" was incorrect."<<endl;
//				}
//				else
//					cout<<"Guess #"<<i+1<<" was incorrect."<<endl;
//			    break;
//			}
//		}
//	}
//		v.clear();
//	    ss.str(string());
//	}
//	m.clear();
//	v.clear();
//	//ss.str(string());
//	sum=0;
//	}
//	return 0;
//}