//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int num=1,count=1;
//	int rows,cols;
//	int nums[400][400];
//	char arr[400][400];
//	cin>>rows;
//	while(rows!=0)
//	{
//		cin>>cols;
//	for(int i=0;i<400;i++)
//		for(int j=0;j<400;j++)
//			nums[i][j]=0;
//	    for(int i=0;i<rows;i++)
//	       {
//		    for(int j=0;j<cols;j++)
//			    cin>>arr[i][j];
//	       }
//	 
//		for(int i=0;i<rows;i++)
//	       {
//		    for(int j=0;j<cols;j++)
//		     {
//				 if(i==0)
//				 {
//					 if(arr[i][j]!='*')
//					 {
//						 nums[i][j]=num;
//						 num++;
//					 }
//				 }
//				 else
//				 {
//					 if(((arr[i][j]!='*')&&(arr[i-1][j]=='*'))||((arr[i][j]!='*')&&(arr[i][j-1]=='*'))||((arr[i][j]!='*')&&(j==0)))
//					 {
//						 nums[i][j]=num;
//							 num++;
//					 }
//				 }
//		     }
//		   }
//		if(count>1)
//			cout<<endl;
//		cout<<"puzzle #"<<count<<":"<<endl;
//		cout<<"Across"<<endl;
//		for(int i=0;i<rows;i++)
//	       {
//		    for(int j=0;j<cols;j++)
//		     {
//					  if(((nums[i][j]!=0)&&(j==0))||((nums[i][j]!=0)&&(arr[i][j-1]=='*')))
//					  {
//						  if(nums[i][j]>99)
//						 cout<<nums[i][j]<<".";
//						  else if(nums[i][j]>9)
//							  cout<<" "<<nums[i][j]<<".";
//						  else
//							  cout<<"  "<<nums[i][j]<<".";
//						 for(int k=i;k<rows;k++)
//						 {
//							 for(int m=j;m<cols;m++)
//							 {
//								 if(arr[k][m]!='*')
//									 cout<<arr[k][m];
//								 else
//									 break;
//							 }
//							 break;
//						 }
//					 cout<<endl;
//					 }
//
//				}
//				 
//			 }
//		cout << "Down\n";
//		for(int i=0;i<rows;i++)
//	       {
//		    for(int j=0;j<cols;j++)
//		     {
//				 if(i==0)
//				 {
//					 if(nums[i][j]!=0){
//					    if(nums[i][j]>99)
//						 cout<<nums[i][j]<<".";
//					    else if(nums[i][j]>9)
//							  cout<<" "<<nums[i][j]<<".";
//						  else
//							  cout<<"  "<<nums[i][j]<<".";
//						 for(int k=j;k<cols;k++){
//							 for(int m=i;m<rows;m++){
//								 if(arr[m][k]!='*')
//									 cout<<arr[m][k];
//								 else
//									 break;
//							 }
//							 break;
//						 }
//					 cout<<endl;
//					 }
//				 }
//				 else
//				 {
//					 
//					 if(nums[i][j]!=0&&arr[i-1][j]=='*')
//					 {
//						if(nums[i][j]>99)
//						 cout<<nums[i][j]<<".";
//						  else if(nums[i][j]>9)
//							  cout<<" "<<nums[i][j]<<".";
//						  else
//							  cout<<"  "<<nums[i][j]<<".";
//						 for(int k=j;k<cols;k++){
//							 for(int m=i;m<rows;m++){
//								 if(arr[m][k]!='*')
//									 cout<<arr[m][k];
//								 else
//									 break;
//							 }
//							 break;
//						 }
//						 cout<<endl;
//
//					 }
//				 }
//		    }
//		}
//			count++;
//			num=1;
//		cin>>rows;
//	}
//
//
//}