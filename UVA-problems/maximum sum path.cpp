//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int n=3;
//int grid[n][n];
//int mem[n][n];
//bool is_valid(int row,int col)
//{
//	if(row>-1&&row<n&&col>-1&&col<n)
//		return true;
//	return false;
//}
//
//int max_path(int r,int c)
//{
//	if(!is_valid(r,c))
//		return 0;
//	if(r==n-1&&c==n-1)
//		return grid[r][c];
//	if(mem[r][c]!=-1)
//		return mem[r][c];
//	int path1=max_path(r+1,c);
//	int path2=max_path(r,c+1);
//	return mem[r][c]=grid[r][c]+max(path1,path2);
//}
//
//int main()
//{
//	grid[0][0]=5;
//	grid[0][1]=1;
//	grid[0][2]=2;
//	grid[1][0]=6;
//	grid[1][1]=7;
//	grid[1][2]=8;
//	grid[2][0]=1;
//	grid[2][1]=4;
//	grid[2][2]=9;
//	memset(mem,-1,sizeof mem);
//	//for(int i=0;i<n;i++)
//	//	for(int j=0;j<n;j++)
//	//		cin>>grid[i][j];
//	cout<<max_path(0,0)<<endl;
//}