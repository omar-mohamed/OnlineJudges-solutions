//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string irr[21],irr2[21],word,mynewstring;
//	int n,c,size,test;
//	cin>>n>>c;
//	for(int i=0;i<n;i++)
//	{
//		cin>>irr[i];
//		cin>>irr2[i];
//	}
//	for(int i=0;i<c;i++)
//	{
//		cin>>word;
//		size=word.size();
//		for(int j=0;j<n;j++)
//		{
//		test=word.compare(irr[j]);
//		if(test==0)
//		{
//			cout<<irr2[j]<<endl;
//			break;
//		}
//		}
//		if(test!=0)
//		{
//		 if((word[size-1]=='y')&&(word[size-2]!='i'&&(word[size-1]=='y')&&(word[size-2]!='e')&&(word[size-1]=='y')&&(word[size-2]!='o')&&(word[size-1]=='y')&&(word[size-2]!='u')&&(word[size-1]=='y')&&(word[size-2]!='a')))
//		{
//			 mynewstring=word.erase(size-1);
//			mynewstring=word.append("ies");
//			cout<<mynewstring<<endl;
//		}
//		else if(word[size-1]=='o'||word[size-1]=='s'||word[size-1]=='x'||word[size-1]=='h'&&word[size-2]=='c'||word[size-1]=='h'&&word[size-2]=='s')
//		{
//			mynewstring=word.append("es");
//			cout<<mynewstring<<endl;
//		}
//		else 
//		{
//			mynewstring=word.append("s");
//			cout<<mynewstring<<endl;
//		}
//		}
//	}
//	return 0;
//}