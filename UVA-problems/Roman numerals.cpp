//#include<iostream>
//using namespace std;
//#include<string>
//#include<stdlib.h>
//void roman_to_num(string input);
//void num_to_roman(string input);
//
//
//int main()
//	{
//		string input;
//		while(cin>>input)
//		{
//			if(isalpha(input[0]))
//			{
//				roman_to_num(input);
//			}
//			else
//			{
//				num_to_roman(input);
//			}
//		}
//		return 0;
//}
//
//
//void roman_to_num(string input)
//{
//	int size=input.size();
//	int sum=0;
//		for(int i=0;i<size;i++)
//		{
//			if(input[i]=='I')
//			{
//				if(input[i+1]=='V')
//				{
//					sum+=4;
//					i++;
//				}
//				else if(input[i+1]=='X')
//				{
//					sum+=9;
//					i++;
//				}
//				else
//					sum++;
//			}
//			else if(input[i]=='V')
//				sum+=5;
//			else if(input[i]=='X')
//			{
//			if(input[i+1]=='L')
//				{
//					sum+=40;
//					i++;
//				}
//				else if(input[i+1]=='C')
//				{
//					sum+=90;
//					i++;
//				}
//				else
//					sum+=10;
//			}
//			else if(input[i]=='L')
//				sum+=50;
//			else if(input[i]=='C')
//			{
//				if(input[i+1]=='D')
//				{
//					sum+=400;
//					i++;
//				}
//				else if(input[i+1]=='M')
//				{
//					sum+=900;
//					i++;
//				}
//				else
//					sum+=100;
//			}
//			else if(input[i]=='D')
//				sum+=500;
//			else if(input[i]=='M')
//				sum+=1000;
//		}
//		cout<<sum<<endl;
//}
//
//
//void num_to_roman(string input)
//{
//	int num;
//	string roman="";
//	num=atoi(input.c_str());
//	while(num!=0)
//	{
//		if(num>=900)
//		{
//			if(num<1000)
//			{
//				roman.append("CM");
//				num-=900;
//			}
//			else
//			{
//				roman.append("M");
//				num-=1000;
//			}
//		}
//		else if(num>=400)
//		{
//			if(num<500)
//			{
//				roman.append("CD");
//				num-=400;
//			}
//			else
//			{
//				roman.append("D");
//				num-=500;
//			}
//		}
//		else if(num>=90)
//		{
//			if(num<100)
//			{
//				roman.append("XC");
//				num-=90;
//			}
//			else
//			{
//				roman.append("C");
//				num-=100;
//			}
//		}
//		else if(num>=40)
//		{
//			if(num<50)
//			{
//				roman.append("XL");
//				num-=40;
//			}
//			else 
//			{
//				roman.append("L");
//				num-=50;
//			}
//		}
//		else if(num>=9)
//		{
//			if(num<10)
//			{
//				roman.append("IX");
//				num-=9;
//			}
//			else
//			{
//				roman.append("X");
//				num-=10;
//			}
//		}
//		else if(num>=4)
//		{
//			if(num<5)
//			{
//				roman.append("IV");
//				num-=4;
//			}
//			else
//			{
//				roman.append("V");
//				num-=5;
//			}
//		}
//		else
//		{
//			roman.append("I");
//			num--;
//		}
//	}
//	cout<<roman<<endl;
//}