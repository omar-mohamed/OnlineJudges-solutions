//#include<iostream>
//#include<string>
//#include <stdlib.h>
//using namespace std;
//int main()
//{
//	string year,part3,part2,part4,Stmp,part1;
//	int first3,size,first2,first4,tmp,first1,i=1;
//	int sum=0,asum=0;
//	while(cin>>year)
//	{
//		if(i>1)
//			cout<<endl;
//		size=year.size();
//		part3=year.substr(size-3,3);
//		part1=year.substr(size-1,1);
//		part2=year.substr(size-2,2);
//		part4=year.substr(size-4,4);
//		first3=atoi(part3.c_str());
//		first2=atoi(part2.c_str());
//		first1=atoi(part1.c_str());
//		first4=atoi(part4.c_str());
//		for(int i=0;i<size;i++)
//		{
//			Stmp=year.substr(i,1);
//			tmp=atoi(Stmp.c_str());
//			sum+=tmp;
//		}
//		for(int i=0;i<size;i++)
//		{
//			Stmp=year.substr(i,1);
//			tmp=atoi(Stmp.c_str());
//			if(i%2==0)
//			asum+=tmp;
//			else
//				asum-=tmp;
//		}
//		if(((first2%25==0)&&(first4%16==0))||((first2%4==0)&&(first3%100!=0)))
//		{
//			cout<<"This is leap year."<<endl;
//			if((sum%3==0)&&((first1==0)||(first1==5)))
//				cout<<"This is huluculu festival year."<<endl;
//			if((asum%11==0)&&((first1==0)||(first1==5)))
//				cout<<"This is bulukulu festival year."<<endl;
//		}
//		else
//		{
//			if((sum%3==0)&&((first1==0)||(first1==5)))
//				cout<<"This is huluculu festival year."<<endl;
//			else
//				cout<<"This is an ordinary year."<<endl;
//			
//		}
//		asum=0;
//		sum=0;
//		i++;
//	}
//	return 0;
//}
//

