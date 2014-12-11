//#include<iostream>
//#include<queue>
//#include<cctype>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int cases;
//	string side;
//	cin>>cases;
//	for(int i=0;i<cases;i++)
//	{
//		int count=0;
//		bool isLeft=true;
//		queue<long long> left;
//		queue<long long> right;
//		long long ferry,carWidth,cars,test;
//		cin>>ferry>>cars;
//		ferry*=100;
//		for(int j=0;j<cars;j++)
//		{
//			cin>>carWidth>>side;
//			if(side=="left")
//				left.push(carWidth);
//			else
//				right.push(carWidth);
//		}
//		while(!left.empty()||!right.empty())
//		{
//			test=0;
//			if(isLeft)
//			{
//				while(!left.empty())
//				{
//					test+=left.front();
//					if(test<=ferry)
//					{
//						left.pop();
//					}
//					else
//						break;
//				}
//				test=0;
//				isLeft=false;
//				count++;
//			}
//			else
//			{
//				while(!right.empty())
//				{
//					test+=right.front();
//					if(test<=ferry)
//						right.pop();
//					else
//						break;
//				}
//				test=0;
//				isLeft=true;
//				count++;
//			}
//		}
//		cout<<count<<endl;
//	}
//	return 0;
//}

//#include<iostream>
//#include<queue>
//#include<vector>
//#include<string>
//using namespace std;
//int main()
//{
//	queue<int> left,right;
//	vector<int> lindex,rindex;
//	string s,place="left";
//	int t,l,number,n,counter=0,sum=0,v=0;
//	cin>>t;
//	for(int i=0;i<t;i++)
//	{
//		place="left",counter=0,sum=0,v=0;
//		cin>>l>>number;
//		l=l*100;
//		for(int j=0;j<number;j++)
//		{
//			cin>>n>>s;
//			if(s=="left")
//			{
//				lindex.push_back(j);
//				left.push(n);
//			}
//			else 
//			{
//				rindex.push_back(j);
//				right.push(n);
//			}
//		}
//		while(!left.empty() || !right.empty())
//		{
//			sum=0,v=0;
//			if(place=="left")
//			{
//				while(v<=l && !left.empty())
//				{
//					
//					if(!left.empty())
//					{
//					sum=sum+left.front();
//					left.pop();
//					}
//					if( lindex.size()>=2)
//					{
//					if(lindex[0]!=lindex[1]-1)
//						break;
//					}
//					if(!left.empty())
//					{
//						v=sum+left.front();
//						if(!lindex.empty())
//					lindex.erase(lindex.begin(),lindex.begin()+1);
//					}
//					else
//					{
//						v=sum;
//						if(!lindex.empty())
//						lindex.erase(lindex.begin(),lindex.begin()+1);
//					}
//				}
//				sum=0,v=0;
//			}
//			place="right";
//			counter++;
//			if(left.empty() && right.empty())
//				break;
//			if(place=="right")
//			{
//				while(v<=l && !right.empty())
//				{
//					
//					if(!right.empty())
//					{
//					sum=sum+right.front();
//					right.pop();
//					
//					}
//					if( rindex.size()>=2)
//					{
//					if(rindex[0]!=rindex[1]-1)
//						break;
//					}
//					if(!right.empty())
//					{
//						v=sum+right.front();
//						if(!rindex.empty())
//					rindex.erase(rindex.begin(),rindex.begin()+1);
//					}
//					else
//					{
//						if(!rindex.empty())
//						rindex.erase(rindex.begin(),rindex.begin()+1);
//						v=sum;
//					}
//				}
//				v=0,sum=0;
//			}
//			place="left";
//			counter++;
//		}
//		lindex.clear();
//		rindex.clear();
//		cout<<counter<<endl;
//	}
//	return 0;
//}