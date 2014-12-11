//#include<iostream>
//using namespace std;
//long long GCD(int,int);
//int main()
//{
//	int n;
//	long long G=0;
//	cin>>n;
//	while(n>0)
//	{
//       for(int i=1;i<n;i++)
//	   {
//         for(int j=i+1;j<=n;j++)
//           {
//              G+=GCD(i,j);
//            }
//	   }
//	   cout<<G<<endl;
//	   G=0;
//		cin>>n;
//	}
//	return 0;
//}
//
//long long GCD(int x,int y)
//{
//	long long r;
//	while (true)
//	{
//		r=y%x;
//		if(r==0)
//			break;
//		y=x;
//		x=r;
//	}
//	return x;
//}







//
//#include<iostream>
//using namespace std;
//int gcd (int a ,int b)
//{
//	if (a > b)
//		swap(a,b);
//	for (int i = 1; i <=sqrt(b) ; i++)
//	{
//		if(b%i==0)
//		{
//			if(a % (b/i)==0)
//				return b/i;
//		}
//	}
//	for (int i = sqrt(b); i >=1 ; i--)
//	{
//		if(b%i==0)
//		{
//			if(a % i==0)
//				return i;
//		}
//	}
//}
//
//int main()
//{
//	int n,sum;
//	gcd(6,17);
//	while(cin>>n)
//	{
//		if(n==0)
//			break;
//		sum=0;
//		for(int x=1 ;x<n ;x++)//loop for no el so8yr
//		{
//			for(int y=x+1 ;y<=n ;y++)//loop for no el kber
//			{
//				sum+=gcd(x,y);
//			}
//		}
//		cout<<sum<<endl;
//	}
//
//	return 0;
//}


//#include <iostream>
//using namespace std ;
//
//int gcd(int n , int m )
//{
//	int r ;
//	while(n!=0)
//	{
//		r=m%n ;
//		m=n ;
//		r=n ;
//	}
//	return (m) ;
//}
//int main ()
//{
//	int q ;
//
//	while (cin>>q && q!=0)
//	{
//		int g=0 ;
//		for(int n=1; n<q ; n++)
//		{
//			for(int m=n+1;m<=q;m++)
//			{
//				g+=gcd(n , m) ;
//			}
//		}
//		cout<<g<<endl;
//	}
//	return 0 ;
//}

