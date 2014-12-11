//#include<iostream>
//using namespace std;
//#include<stdio.h>
//#include <string.h>
//#include<string>
//#include<cstring>
//int main()
//{
//
//	int c,count=0;
//	char word[120];
//	cin>>c;
//	getchar();
//	for(int i=1;i<=c;i++)
//	{
//		cin.getline(word,120);
//		int j=0;
//		while(word[j]!='\0')
//		{
//			if(word[j]=='a'||word[j]=='d'||word[j]=='g'||word[j]=='j'||word[j]=='m'||word[j]=='p'||word[j]=='t'||word[j]=='w'||word[j]==' ')
//				count++;
//			else if(word[j]=='b'||word[j]=='e'||word[j]=='h'||word[j]=='k'||word[j]=='n'||word[j]=='q'||word[j]=='u'||word[j]=='x')
//				count+=2;
//			else if(word[j]=='c'||word[j]=='f'||word[j]=='i'||word[j]=='l'||word[j]=='o'||word[j]=='r'||word[j]=='v'||word[j]=='y')
//				count+=3;
//			else if(word[j]=='s'||word[j]=='z')
//				count+=4;
//			j++;
//		}
//			cout<<"Case #"<<i<<": "<<count<<endl;
//			count=0;
//	}
//	return 0;
//}


//
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int t,clicks=0;
//	string input;
//	string one="adgjmptw ";
//	string two="behknqux";
//	string three="cfilorvy";
//	string four="sz";
//	cin>>t;
//	cin.ignore();
//	for(int i=1 ;i<=t ;i++)
//	{
//		getline(cin,input);
//		for(int j=0 ;j<input.size() ;j++)//loop ydwr 3 el 7rf gwaa el string
//		{
//			if(one.find(input[j])!=-1)//mwgoda
//				clicks++;
//			else if(two.find(input[j])!=-1)
//				clicks+=2;
//			else if(three.find(input[j])!=-1)
//				clicks+=3;
//			else
//				clicks+=4;
//		}
//		cout<<"Case "<<"#"<<i<<": "<<clicks<<endl;
//	}
//	return 0;
//}

