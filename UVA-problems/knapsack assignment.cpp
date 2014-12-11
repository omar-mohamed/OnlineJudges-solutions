//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//vector<int> wt;
//vector<int> val; 
//
//long long knapSack(int bag_size,int v_size)
//{
//	vector<long long> A(bag_size+1),B(bag_size+1);
//
//	for (int i = 0; i < v_size; i++)
//   {
//	   for (int  w= 0; w <= bag_size; w++)
//       {
//		   if(w==0||i==0)
//		   {
//			   	A[0]=0;
//	            B[0]=0;
//		   }
//           else if (wt[i] <= w)
//                 B[w] = max(val[i] + A[w-wt[i]],  A[w]);
//           else
//                 B[w] = A[w];
//       }
//	   	A=B;
//   }
//	return B[bag_size];
//}
//
//int main()
//{
//	int num_objects,bag_size;
//	while(cin>>bag_size>>num_objects)
//	{
//		val.push_back(0);
//		wt.push_back(0);
//		for(int j=0;j<num_objects;j++)
//		{
//			int V,W;
//			cin>>V>>W;
//			val.push_back(V);
//			wt.push_back(W);
//		}
//		cout<<"ans is : "<<knapSack(bag_size,num_objects+1)<<endl;
//		wt.clear();
//		val.clear();
//	}
//	return 0;
//}