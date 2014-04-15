#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> wt;
vector<int> val; 

int knapSack(int bag_size,int v_size)
{
	vector<vector<int> > arr;
	arr.resize(bag_size+1);
	for(int i=0;i<bag_size+1;i++)
		arr[i].resize(v_size);

	for (int w = 0; w < bag_size+1; w++)
   {
	   for (int  j= 0; j < v_size; j++)
       {
		   if(w==0||j==0)
			   arr[w][j]=0;
		   else if(w<wt[j])
			   arr[w][j]=arr[w][j-1];
		   else
			   arr[w][j]=max(arr[w][j-1],arr[w-wt[j]][j-1]+val[j]);
       }
   }
	return arr[bag_size][v_size-1];
}

int main()
{
	int cases;
	cin>>cases;
	for(int i=1;i<=cases;i++)
	{
		val.push_back(0);
		wt.push_back(0);
		int sum=0;
		vector<int> people;
		int num_objects,num_people;
		cin>>num_objects;
		for(int j=0;j<num_objects;j++)
		{
			int P,W;
			cin>>P>>W;
			val.push_back(P);
			wt.push_back(W);
		}
		cin>>num_people;
		for(int j=0;j<num_people;j++)
		{
			int x;
			cin>>x;
			sum+=knapSack(x,num_objects+1);
		}
		cout<<sum<<endl;
		wt.clear();
		val.clear();
	}
	return 0;
}