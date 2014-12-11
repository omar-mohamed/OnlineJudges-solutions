//#include<iostream>
//#include<queue>
//#include<vector>
//#include<stack>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int coaches;
//	cin>>coaches;
//	while(coaches>0)
//	{
//		stack<int> inStation;
//		queue<int> outStation;
//		vector<int> req(coaches);
//		while(true)
//		{
//		for(int i=0;i<coaches;i++)
//		{
//			cin>>req[i];
//			outStation.push(i+1);
//			if(req[0]==0)
//				break;
//		}
//		if(req[0]!=0)
//		{
//			for(int i=0;i<coaches;i++)
//			{
//				if(!outStation.empty()&&outStation.front()==req[i])
//					outStation.pop();
//				else if(!inStation.empty()&&inStation.top()==req[i])
//					inStation.pop();
//				else
//				{
//					while(!outStation.empty())
//					{
//						if(outStation.front()!=req[i])
//						{
//							inStation.push(outStation.front());
//							outStation.pop();
//						}
//						else
//						{
//							outStation.pop();
//							break;
//						}
//					}
//				}
//			}
//		}
//		else
//			break;
//		if(inStation.empty()&&outStation.empty())
//			cout<<"Yes"<<endl;
//		else
//			cout<<"No"<<endl;
//		while(!inStation.empty())
//			inStation.pop();
//		while(!outStation.empty())
//			outStation.pop();
//		
//		} 
//		cout<<endl;
//		cin>>coaches;
//	}
//	return 0;
//}
