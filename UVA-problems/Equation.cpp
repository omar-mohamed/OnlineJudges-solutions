//#include<iostream>
//#include<stack>
//#include<vector>
//#include<cctype>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//struct op
//{
//	string ch;
//	int priority;
//};
//
//int main()
//{
//	op input;
//	int cases;
//	string line;
//	stack<op> infix;
//	vector<char> postfix;
//	cin>>cases;
//	cin.ignore();
//	getline(cin,line);
//	for(int i=1;i<=cases;i++)
//	{
//		while((getline(cin,input.ch))&&(input.ch!=""))
//		{
//			if(input.ch[0]=='+'||input.ch[0]=='-')
//				input.priority=1;
//			else if(input.ch[0]=='*'||input.ch[0]=='/')
//				input.priority=2;
//			else if(isdigit(input.ch[0]))
//				input.priority=0;
//			else
//				input.priority=4;
//			if(infix.empty())
//			{
//				if(input.priority==0)
//					postfix.push_back(input.ch[0]);
//				else
//				infix.push(input);
//			}
//			else
//			{
//				if(input.ch[0]==')')
//				{
//				  while(infix.top().ch[0]!='(')
//					{
//						postfix.push_back(infix.top().ch[0]);
//						infix.pop();
//					}
//				  infix.pop();
//				}
//				else if(input.priority==0)
//					postfix.push_back(input.ch[0]);
//				else if(input.priority<=infix.top().priority&&infix.top().ch[0]!='(')
//				{
//					while((!infix.empty())&&(input.priority<=infix.top().priority)&&(infix.top().ch[0]!='('))
//					{
//						postfix.push_back(infix.top().ch[0]);
//						infix.pop();
//					}
//					infix.push(input);
//				}
//				else 
//					infix.push(input);
//			}
//		}
//		while(!infix.empty())
//		{
//			postfix.push_back(infix.top().ch[0]);
//			infix.pop();
//		}
//		if(i>1)
//			cout<<endl;
//		for(int j=0;j<postfix.size();j++)
//			cout<<postfix[j];
//		cout<<endl;
//		postfix.clear();
//	}
//	return 0;
//}

