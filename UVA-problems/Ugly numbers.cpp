//# include<stdio.h>
//# include<stdlib.h>
//#include<vector>
//#include<algorithm>
//using namespace std;
// 
//* Function to get the nth ugly number*/
//unsigned getNthUglyNo(unsigned n)
//{
//	vector<int> ugly;
//	ugly.push_back(1);
//    unsigned i2 = 0, i3 = 0, i5 = 0;
//    unsigned i;
//    unsigned next_multiple_of_2 = 2;
//    unsigned next_multiple_of_3 = 3;
//    unsigned next_multiple_of_5 = 5;
//    unsigned next_ugly_no = 1;
//    for(i=1; i<n; i++)
//    {
//       next_ugly_no = min(min(next_multiple_of_2,next_multiple_of_3),next_multiple_of_5);
//	   ugly.push_back(next_ugly_no);                   
//       if(next_ugly_no == next_multiple_of_2)
//       {
//           i2++;      
//           next_multiple_of_2 = ugly[i2]*2;
//       }
//       if(next_ugly_no == next_multiple_of_3)
//       {
//           i3++;
//           next_multiple_of_3 = ugly[i3]*3;
//       }
//       if(next_ugly_no == next_multiple_of_5)
//       {
//           i5++;
//           next_multiple_of_5 = ugly[i5]*5;
//       }
//    } /*End of for loop (i=1; i<n; i++) */
//    return next_ugly_no;
//}
// 
//
// 
//* Driver program to test above functions */
//int main()
//{
//    unsigned no = getNthUglyNo(150);
//    printf("%dth ugly no. is %d ", 150, no);
//    getchar();
//    return 0;
//}