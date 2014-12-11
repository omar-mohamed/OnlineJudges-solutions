//#include<iostream>
//#include<algorithm>
//#include<sstream>
//#include<vector>
//using namespace std;
//
//const int MAX = 21;
//int r[MAX];
//int g[MAX];
//int b[MAX];
//int mem[MAX][4];
//
//int n;
//
//
//int minCost(int i, int lasColor)
//
//{
//
//	if(i == n)
//		return 0;
//
//	int &ret = mem[i][lasColor];
//
//	if(ret != -1)
//		return ret;
//
//	ret=1000000;
//
//	if(lasColor != 0)
//		ret = min(ret, r[i] + minCost(i+1, 0));
//
//
//
//	if(lasColor != 1)
//		ret = min(ret, g[i] + minCost(i+1, 1));
//
//
//
//	if(lasColor != 2)
//		ret = min(ret, b[i] + minCost(i+1, 2));
//
//	return ret;
//}
//
//
//
//
//
//class RGBStreet {
//public:
//	int estimateCost(vector <string> houses)
//	{
//		for(int i=0;i<houses.size();i++)
//		{
//			istringstream iss(houses[i]);
//			iss>>r[i]>>g[i]>>b[i];
//		}
//		n = houses.size();
//		memset(mem,-1,sizeof mem);
//	   return minCost(0, 3);
//	}
//};
//
//int main()
//{
//	vector<string> houses;
//	houses.push_back("1 100 200");
//	houses.push_back("100 200 300");
//	houses.push_back("800 1000 3");
//	RGBStreet o;
//	cout<<o.estimateCost(houses)<<endl;
//}