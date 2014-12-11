//#include<iostream>
//using namespace std;
//#include<string>
//int main()
//{
//	long long size,power=1,subsize;
//	int test=0;
//	string word,sub,sub2;
//	cin>>word;
//	while(word!=".")
//	{
//		size=word.size();
//		for(long i=1;i<=size/2;i++)
//		{
//			if(size%i==0)
//			{
//					sub2=word.substr(0,i);
//					sub=word.substr(0,i);
//				for(int j=0;j<size;j++)
//				{
//					if(sub==word)
//					{
//						test=1;
//						break;
//					}
//					else
//					{
//						power++;
//						sub+=sub2;
//						subsize=sub.size();
//						if(subsize>size)
//							break;
//					}
//
//				}
//			}
//			if(test==1)
//				break;
//			power=1;
//		}
//		
//		cout<<power<<endl;
//		power=1;
//		test=0;
//		cin>>word;
//	}
//	return 0;
//
//}






