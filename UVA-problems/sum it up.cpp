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
//set<vector<int> > lol;
// void subset_sum(  int s_size,int sum, int ite,int target_sum)
//{
//	 if(sum>target_sum)
//		return;
//	 else if(sum==target_sum)
//    {
//		lol.insert(ans);
//		return;
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
//		if(N==0&&tracks==0)
//			break;
//		weights.clear();
//		ans.clear();
//		lol.clear();
//		for(int i=0;i<tracks;i++)
//		{
//			int l;
//			cin>>l;
//			weights.push_back(l);
//		}
//		subset_sum(tracks,0,0,N);
//		cout<<"Sums of "<<N<<":\n";
//		if(lol.empty())
//			cout<<"NONE"<<endl;
//		else
//		{
//			for(set<vector<int> >::reverse_iterator i=lol.rbegin();i!=lol.rend();i++)
//			{
//				for(int j=0;j<i->size();j++)
//				{
//					cout<<i->at(j);
//					if(j!=i->size()-1)
//						cout<<"+";
//				}
//				cout<<endl;
//			}
//
//		}
//	}
//    return 0;
//}