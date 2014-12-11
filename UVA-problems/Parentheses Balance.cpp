//#include<iostream>
//#include<stack>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//bool Check(string input);
//
//int main()
//{
//	string line,input;
//	int cases;
//	cin>>cases;
//	cin.ignore();
//	for(int i=1;i<=cases;i++)
//	{
//		getline(cin,line);
//		for(int j=0;j<line.size();j++)
//		{
//			if(line[j]!=' ')
//				input.push_back(line[j]);
//		}
//		if(Check(input))
//			cout<<"Yes"<<endl;
//		else
//			cout<<"No"<<endl;
//		input.clear();
//	}
//	return 0;
//}
//
//
//bool Check(string input)
//{
//	stack<char> s;
//	for(int i=0;i<input.size();i++)
//	{
//		if(s.empty())
//			s.push(input[i]);
//		else
//		{
//			if(input[i]==')')
//			{
//				if(s.top()=='(')
//					s.pop();
//				else
//					return false;
//			}
//			else if(input[i]==']')
//			{
//				if(s.top()=='[')
//					s.pop();
//				else
//					return false;
//			}
//			else
//				s.push(input[i]);
//		}
//	}
//	if(s.empty())
//	    return true;
//	else
//		return false;
//}