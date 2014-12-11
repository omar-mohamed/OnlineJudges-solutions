//#include<iostream>
//#include<set>
//#include<utility>
//#include<algorithm>
//#include<vector>
//#include<iomanip>
//using namespace std;
//int board[8][8]={0};
//vector<vector<pair<int,int> > > cor(92);
//int index=0;
//bool isSafe(int row, int col)
//{
//    int i, j;
//
//    for (i = 0; i < col; i++)
//    {
//        if (board[row][i])
//            return false;
//    }
//
//    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
//    {
//        if (board[i][j])
//            return false;
//    }
// 
//    for (i = row, j = col; j >= 0 && i < 8; i++, j--)
//    {
//        if (board[i][j])
//            return false;
//    }
// 
//    return true;
//}
// 
//void solveNQUtil( int col)
//{
//    if (col >= 8)
//	{
//		for(int i=0;i<8;i++)
//		{
//			for(int j=0;j<8;j++)
//				if(board[i][j]==1)
//					cor[index].push_back(make_pair(i,j));
//		}
//		index++;
//		return;
//	}
//    for (int i = 0; i < 8; i++)
//    {
//        if ( isSafe(i, col) )
//        {
//            board[i][col] = 1;
//			solveNQUtil(col + 1);
//            board[i][col] = 0;
//        }
//	}
//}
//
//int main()
//{
//	solveNQUtil(0);
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++)
//	{
//		int arr[8][8];
//		long sum=0,temp=0;
//		for(int j=0;j<8;j++)
//			for(int k=0;k<8;k++)
//				cin>>arr[j][k];
//		for(int j=0;j<92;j++)
//		{
//			temp=0;
//			for(int k=0;k<cor[j].size();k++)
//			{
//				temp+=arr[cor[j][k].first][cor[j][k].second];
//			}
//			sum=max(sum,temp);
//		}
//		cout <<setw(5);
//		cout<<sum<<endl;
//	}
//	return 0;
//}