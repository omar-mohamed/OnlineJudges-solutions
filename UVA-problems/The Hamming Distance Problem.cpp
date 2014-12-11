//#include<iostream>
//using namespace std;
//#include<string>
//#include<stdio.h>
//#include<set>
//#include<algorithm>
////void permute(string word, int i, int size)
////{
////       for (int j = i; j <= size; j++)
////       {
////		   if(word[i]!=word[j])
////		   {
////             swap(word[i], word[j]);          
////             permute(word, i+1, size);
////             swap(word[i], word[j]);
////		   }
////} 
////	     s.insert(word);
////}
//
//int main()
//{
//   string word,line;
//   int cases,size,H_Distance;
//   cin>>cases;
//   for(int i=1;i<=cases;i++)
//   {
//	   set<string> s;
//	   word="";
//	   cin>>size>>H_Distance;
//	   word.append(size-H_Distance,'0');
//	   word.append(H_Distance,'1');
//     //  permute(word, 0, size-1);
//	   do
//	   {
//		   s.insert(word);
//	   }while(next_permutation(word.begin(),word.end()));
//	   set<string>::iterator it=s.begin();
//	   while(it!=s.end())
//	   {
//		   cout<<*it<<endl;
//		   it++;
//	   }
//	  // s.clear();
//	   if(i!=cases)
//	     cout<<endl;
//   }
//   return 0;
//}