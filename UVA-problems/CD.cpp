//#include<iostream>
//#include<set>
//#include<utility>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<iomanip>
//using namespace std;
//vector<int> weights;
//vector<int> ans;
//map<int,vector<int> > pq;
//int temp=0;
//void print_sol(int sum)
//{
//	for(int i=0;i<pq[sum].size();i++)
//	{
//		cout<<pq[sum][i]<<" ";
//	}
//	cout<<"sum:"<<sum<<endl;
//}
//
// void subset_sum(  int s_size,int sum, int ite,int target_sum)
//{
//	 if(sum>target_sum)
//		return;
//	 else if(sum>temp)
//    {
//			temp=sum;
//			pq[sum]=ans;
//			if(sum==target_sum)
//				return;
//	}
//        for( int i = ite; i < s_size; i++ )
//        {
//			ans.push_back(weights[i]);
//			subset_sum(s_size, sum + weights[i], i + 1, target_sum);
//			ans.pop_back();
//        }
//}
//
//
//  int main()
//{
//	int N,tracks;
//	while(cin>>N>>tracks)
//	{
//		weights.clear();
//		ans.clear();
//		pq.clear();
//		temp=0;
//		for(int i=0;i<tracks;i++)
//		{
//			int l;
//			cin>>l;
//			weights.push_back(l);
//		}
//		  subset_sum(tracks,0,0,N);
//		  print_sol(temp);
//	}
//    return 0;
//}