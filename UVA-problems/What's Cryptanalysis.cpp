//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	string word,alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZ",all;
//	int n,size,arr[26];
//	cin>>n;
//	cin.ignore();
//	for(int i=0;i<n;i++)
//	{
//		getline(cin,word);
//		all.append(word);
//	}
//		for(int i=0;i<26;i++)
//	{
//		arr[i]=0;
//	}
//	size=all.size();
//	for(int i=0;i<size;i++)
//	{
//		all[i]=toupper(all[i]);
//	}
//	for(int i=0;i<26;i++)
//	{
//		for(int j=0;j<size;j++)
//		{
//			if(alpha[i]==all[j])
//				arr[i]++;
//		}
//	}
//	for(int i=1;i<=26;i++)
//	{
//		for(int j=0;j<26;j++)
//		{
//			if(arr[j+1]>arr[j])
//			{
//				swap(arr[j],arr[j+1]);
//				swap(alpha[j],alpha[j+1]);
//			}
//		}
//	}
//	for(int i=0;i<26;i++)
//	{
//		if(arr[i]==0)
//			break;
//		cout<<alpha[i]<<" "<<arr[i]<<endl;
//	}
//	return 0;
//}




