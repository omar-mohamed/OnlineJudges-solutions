//#include<iostream>
//#include<string.h>
//#include<vector>
//using namespace std;
//
//typedef long long ll;
////divisors(n)=(a+1)*(b+1)*(c+1)...
////divisors(n^z)=(az+1)*(bz+1)*(cz+1)...


//	choose[0][0]=1;
//	for(int i=1;i<=60;i++)
//		for(int j=0;j<=i;j++)
//		{
//			if(j==0)
//				choose[i][j]=choose[i-1][j];
//			else
//				choose[i][j]=choose[i-1][j]+choose[i-1][j-1];
//		}

//bool isPrime(ll n)
//{
//	if(n==2)
//		return true;
//	if(n<2||(n&1)==0)
//		return false;
//	for(int i=3;i*i<=n;i+=2)
//	{
//		if(n%i==0)
//			return false;
//	}
//	return true;
//}

//int gcd(int a,int b)
//{
//	if(b==0)
//		return a;
//	return gcd(b,a%b);
//}
//
//vector<bool> prime;
//
//void sieve(int n)
//{
//	prime.resize(n+1,true);
//	prime[0]=prime[1]=0;
//	for(int i=2;i*i<=n;i++)
//	{
//		if(prime[i])
//			for(int j=i*i;j<=n;j+=i)
//				prime[j]=false;
//	}
//}
//
//vector<ll> generateDivisors(ll n)
//{
//	vector<ll> div;
//	ll i;
//	for(i=1;i*i<n;i++)
//	{
//		if(n%i==0)
//		{
//			div.push_back(i),div.push_back(n/i);
//		}
//	}
//	if(i*i==n)
//		div.push_back(i);
//	return div;
//}
//
//vector<ll> primeFactorization(ll n)
//{
//	vector<ll> prime_div;
//	ll i;
//	for(i=2;i*i<=n;i++)
//	{
//		while(n%i==0)
//		{
//			prime_div.push_back(i);
//			n/=i;
//		}
//	}
//	if(n>1)
//		prime_div.push_back(n);
//	return prime_div;
//}
//
//int main()
//{
//	vector<ll> v=primeFactorization(300);
//	for(int i=0;i<v.size();i++)
//		cout<<v[i]<<" ";
//}