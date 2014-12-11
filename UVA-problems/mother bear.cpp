//#include<iostream>
//#include<algorithm>
//#include <cctype>
//#include<string>
//using namespace std;
//int main()
//{
//	int n,size;
//	string word,rev;
//	getline(cin,word);
//	while(word!="DONE")
//	{
//		size=word.size();
//		for(int i=0;i<size;i++)
//		{
//			if(word[i]==' '||word[i]==','||word[i]=='.'||word[i]=='!'||word[i]=='?')
//			{
//				word.erase(i,1);
//				i--;
//				size=word.size();
//			}
//			word[i]=tolower(word[i]);
//		}
//		///*transform(word.begin(), word.end(), word.begin() ,tolower);*/
//		rev=word;
//		
//		reverse(word.begin(),word.end());
//		if(rev==word)
//			cout<<"You won't be eaten!"<<endl;
//		else
//			cout<<"Uh oh.."<<endl;
//		getline(cin,word);
//	}
//	return 0;
//}


