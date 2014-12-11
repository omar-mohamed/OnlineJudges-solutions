//#include<stdio.h>
//#define mx 2010
//#pragma warning(disable: 4996)
//#define inf 100000000;
//int Dis[mx],Node,Edge,a[mx],b[mx],c[mx];
//
//
//bool Belmanford()
//{
//    int i,j;
//    for(i=0;i<Node;i++) 
//		Dis[i]=inf;
//	Dis[0]=0;
//    for(i=0;i<Node-1;i++)
//        for(j=0;j<Edge;j++)
//            if(Dis[b[j]]>Dis[a[j]]+c[j])
//                Dis[b[j]]=Dis[a[j]]+c[j];
//
//    for(i=0;i<Edge;i++)
//        if(Dis[b[i]]>Dis[a[i]]+c[i]) 
//			return true;
//
//        return false;
//}
//int main()
//{
//    int t,i;
//    scanf("%d",&t);
//    while(t--)
//    {
//        scanf("%d %d",&Node,&Edge);
//        for(i=0;i<Edge;i++)
//            scanf("%d %d %d",&a[i],&b[i],&c[i]);
//        if(Belmanford())
//            printf("possible\n");
//        else
//            printf("not possible\n");
//    }
//    return 0;
//}
//


//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <cstring>
//#include <string>
//#include <cctype>
//#include <stack>
//#include <queue>
//#include <list>
//#include <vector>
//#include <map>
//#include <sstream>
//#include <cmath>
//#include <bitset>
//#include <utility>
//#include <set>
//#define INT_MAX 2147483647
//#define INT_MIN -2147483648
//#define pi acos(-1.0)
//#define N 1000000
//#define LL long long
//using namespace std;
//#pragma warning(disable: 4996)
//struct edges
//{
//    int u;
//    int v;
//    int w;
//} e [2000 + 10];
// 
//int main ()
//{
//    int testCase;
//    scanf ("%d", &testCase);
// 
//    while ( testCase-- ) {
//        int n, m;
//        scanf ("%d %d", &n, &m);
// 
//        for ( int i = 0; i < m; i++ )
//            scanf ("%d %d %d", &e [i].u, &e [i].v, &e [i].w);
// 
//        int d [1000 + 10];
//        for ( int i = 0; i <= n; i++ ) d [i] = INT_MAX;
// 
//        d [0] = 0;
// 
//        for ( int i = 0; i < n - 1; i++ ) {
//            for ( int j = 0; j < m; j++ ) {
//                if ( d [e [j].u] + e [j].w < d [e [j].v] )
//                    d [e [j].v] = d [e [j].u] + e [j].w;
//            }
//        }
// 
//        bool have_negative_cycle = false;
// 
//        for ( int j = 0; j < m; j++ ) {
//            if ( d [e [j].u] + e [j].w < d [e [j].v] )
//                have_negative_cycle = true;
//        }
// 
//        if ( have_negative_cycle ) printf ("possible\n");
//        else printf ("not possible\n");
// 
//    }
//    return 0;
//}