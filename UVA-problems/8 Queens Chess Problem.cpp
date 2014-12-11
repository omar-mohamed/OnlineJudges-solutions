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
//					cor[index].push_back(make_pair(j,i));
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
//	int n;
//	cin>>n;
//	solveNQUtil(0);
//	for(int i=1;i<=n;i++)
//	{
//		int row,col;
//		cin>>row>>col;
//		vector<int> ind;
//		vector<vector<pair<int,int> > > ans;
//		for(int j=0;j<92;j++)
//		{
//			for(int k=0;k<cor[j].size();k++)
//			{
//				if(cor[j][k].second==row-1&&cor[j][k].first==col-1)
//					ans.push_back(cor[j]);
//			}
//		}
//		int index=1;
//		if(i>1&&i<=n)
//			cout<<endl;
//        cout << "SOLN       COLUMN" << endl;
//        cout << " #      1 2 3 4 5 6 7 8\n" << endl;
//		for(int j=0;j<ans.size();j++)
//		{
//			sort(ans[j].begin(),ans[j].end());
//			cout<<setw(2)<<index++<<"      ";
//			for(int k=0;k<ans[j].size();k++)
//			{
//				cout<<ans[j][k].second+1;
//				if(k!=ans[j].size()-1)
//					cout<<" ";
//			}
//			cout<<endl;
//		}
//	}
//	return 0;
//}