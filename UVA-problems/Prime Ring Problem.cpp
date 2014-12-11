//#include<iostream>
//#include<set>
//#include<utility>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<iomanip>
//#include <stdio.h>
//#include <stdlib.h>
//using namespace std;
//
//vector<bool> primes;
//vector<int> lol;
//vector<bool> visited;
//void sieve()
//{
//
//	primes.assign(40,true);
//	primes[0]=false;
//	primes[1]=true;
//    for (int i=2;i<40;i++)
//        if (primes[i])
//            for (int j=i;i*j<40;j++)
//                primes[i*j]=0;
//}
//
//bool isSafe(int num)
//{
//	if(primes[lol[lol.size()-1]+num])
//		return true;
//	return false;
//}
//
//void primeRing(int n,int index)
//{
//	if(index==n)
//	{
//		for(int i=0;i<lol.size();i++)
//		{
//			cout<<lol[i];
//			if(i<lol.size()-1)
//					cout<<" ";
//		}
//		cout<<endl;
//		return;
//	}
//	for (int i = 2; i <= n; i++)
//	{
//		if(!visited[i]&&isSafe(i))
//		{
//			if (index == n - 1 && !primes[1 + i])
//                continue;
//			lol.push_back(i);
//			visited[i]=true;
//			primeRing(n,index+1);
//			lol.pop_back();
//			visited[i]=false;
//		}
//	}
//}
//
//
//int main()
//{
//	sieve();
//	int n,cases=1;
//	while(cin>>n)
//	{
//		lol.clear();
//		lol.push_back(1);
//		visited.assign(n+1,false);
//		if(cases>1)
//			cout<<endl;
//		cout<<"Case "<<cases++<<":\n";
//		if(n%2==0)
//		   primeRing(n,1);
//	}
//	return 0;
//}