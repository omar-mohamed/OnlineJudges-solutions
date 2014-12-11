//#include<iostream>
//#include<set>
//#include<vector>
//#include<map>
//#include <stdio.h>
//#include <cctype>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//struct Group
//{
//	string projectName;
//	int numOfstudents;
//};
//
//
//bool Compare(Group G1,Group G2)
//{
//	if(G1.numOfstudents>G2.numOfstudents)
//		return true;
//	if(G1.numOfstudents<G2.numOfstudents)
//		return false;
//	if(G1.projectName<G2.projectName)
//		return true;
//	return false;
//}
//
//int main()
//{
//	string project,input;
//	getline(cin,project);
//	while(project!="0")
//	{
//		map<string,set<string> > projects;
//		projects[project];
//		map<string,string> students;
//		vector<Group > output;
//		Group group;
//		if(isupper(project[0]))
//		{
//		while(getline(cin,input))
//		{
//			if(input=="1")
//				break;
//			if(!isupper(input[0]))
//			{
//				if(students.empty())
//				{
//				    projects[project].insert(input);
//					students[input]=project;
//				}
//				else
//				{
//					if(students[input]!="")
//					{
//						if(students[input]!=project)
//							projects[students[input]].erase(input);
//						else
//						{
//							 projects[project].insert(input);
//					         students[input]=project;
//						}
//					}
//					else
//					{
//							 projects[project].insert(input);
//					         students[input]=project;
//					}
//				}
//			}
//			else
//			{
//				project=input;
//				projects[project];
//			}
//		}
//		map<string,set<string> >::iterator it=projects.begin();
//		while(it!=projects.end())
//		{
//			group.projectName=it->first;
//			group.numOfstudents=it->second.size();
//			output.push_back(group);
//			it++;
//		}
//		sort(output.begin(),output.end(),Compare);
//		for(int i=0;i<output.size();i++)
//			cout<<output[i].projectName<<" "<<output[i].numOfstudents<<endl;
//		}
//		getline(cin,project);
//	}
//	return 0;
//}