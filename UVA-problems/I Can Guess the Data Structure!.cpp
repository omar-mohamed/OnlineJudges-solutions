//#include<iostream>
//#include<stack>
//#include<algorithm>
//#include<string>
//#include<queue>
//using namespace std;
//int main()
//{
//	priority_queue<int> PriorityQueue;
//	stack<int> stack;
//	queue<int> que;
//	int n,x,y;
//	while(cin>>n)
//	{
//	    bool PQ=true;
//	    bool s=true;
//	    bool q=true;
//		for(int i=0;i<n;i++)
//		{
//			cin>>x>>y;
//			if(x==1)
//			{
//				stack.push(y);
//				que.push(y);
//				PriorityQueue.push(y);
//			}
//			else
//			{
//				if(stack.empty()&&que.empty()&&PriorityQueue.empty())
//					s=q=PQ=false;
//				if(!stack.empty()&&s==true)
//				{
//					if(y==stack.top())
//						stack.pop();
//					else
//						s=false;
//				}
//				if(!que.empty()&&q==true)
//				{
//					if(y==que.front())
//						que.pop();
//					else
//						q=false;
//				}
//				if(!PriorityQueue.empty()&&PQ==true)
//				{
//					if(y==PriorityQueue.top())
//						PriorityQueue.pop();
//					else
//						PQ=false;
//				}
//
//			}
//		}
//		if((s==true) &&(q==false)&&(PQ==false))
//			cout<<"stack"<<endl;
//		else if((s==false) &&(q==true)&&(PQ==false))
//			cout<<"queue"<<endl;
//		else if((s==false) &&(q==false)&&(PQ==true))
//			cout<<"priority queue"<<endl;
//		else if((s==false) &&(q==false)&&(PQ==false))
//			cout<<"impossible"<<endl;
//		else
//			cout<<"not sure"<<endl;
//		while ( ! stack.empty() )
//             {
//                stack.pop();
//              }
//		while ( ! que.empty() )
//             {
//                que.pop();
//              }
//		while(!PriorityQueue.empty())
//		{
//		     PriorityQueue.pop();
//		}
//	}
//	return 0;
//}