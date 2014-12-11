//#include<iostream>
//#include<string>//3shan msh 7dd 3dd el elements
//#include<stdlib.h>
//using namespace std;
//int GCD(int x,int y)
//{
//	while(true)
//	{
//		int rem=y%x;
//		if(rem==0)
//			break;
//		y=x;
//		x=rem;
//	}
//	return x;
//}
//int main()
//{	
//	int t,index,y,x,arr[10000];//index 3dd el elements ele htd5ol
//	string s;
//	string empty="";
//	cin>>t;
//	cin.ignore();
//	for(int i=1 ;i<=t ;i++)
//	{
//		index=0,empty="";
//		getline(cin,s);
//		s+=" ";//b3d a5r string f space 3shan y5od a5r element
//		for(int j=0;j<s.size();j++)
//		{
//			if(s[j]!=' ')
//				empty=empty+s[j];
//			else
//			{
//				if(empty!="")
//				{
//			        	arr[index]=atoi(empty.c_str());//convert string to num
//				        index++;
//				        empty="";
//				}
//			}
//		}
//		int max=0;
//		for(int k=0 ;k<index-1 ;k++)
//		{
//			for(int l=k+1 ;l<index ;l++)
//			{
//				int gcd=GCD(arr[k],arr[l]);
//				if(gcd>max)
//					max=gcd;
//			}
//		}
//		cout<<max<<endl;
//	}
//	return 0;
//}



