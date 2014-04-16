//#include<iostream>
//using namespace std;
//#include<queue>
//#include<vector>
//int main()
//{
//	queue<int> cards;
//	vector<int> discarded;
//	int n;
//	cin>>n;
//	while(n>0)
//	{
//		for(int i=1;i<=n;i++)
//			cards.push(i);
//		while(cards.size()>1)
//		{
//			discarded.push_back(cards.front());
//			cards.pop();
//			cards.push(cards.front());
//			cards.pop();
//		}
//		cout<<"Discarded cards:";
//		for(int i=0;i<discarded.size();i++)
//		{
//			cout<<" "<<discarded[i];
//			if(i<discarded.size()-1)
//				cout<<",";
//		}
//
//		cout<<endl;
//		cout<<"Remaining card: "<<cards.front()<<endl;
//		cards.pop();
//		discarded.clear();
//		cin>>n;
//	}
//	return 0;
//}


