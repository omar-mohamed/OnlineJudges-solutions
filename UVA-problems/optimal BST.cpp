//#include <stdio.h>  
//#include<conio.h>  
//#define MAXKEYS (30)  
//#define INFINITY 30000  
//#pragma warning(disable: 4996)
//int n; // number of keys  
//int key[MAXKEYS+1];  
//float p[MAXKEYS+1]; // probability of hitting key i  
//float e[MAXKEYS+1][MAXKEYS+1]; // cost of subtree  
//int r[MAXKEYS+1][MAXKEYS+1]; // root of subtree  
//float w[MAXKEYS+1][MAXKEYS+1]; // weight  
//  
//void opttree()  
//{  
//    int i,j,l,r1;  
//    float t;  
//  
//    for (i=1;i<=n+1;i++)  
//    {  
//      e[i][i-1]=0;  // initialize cost and weight matrix to zero  
//      w[i][i-1]=0;  
//      }  
//    for (l=1;l<=n;l++) // width of tree h=1  
//    {  
//  
//        for(i=1;i<=n-l+1;i++)  
//        {  
//        j=i+l-1;  
//        e[i][j]=INFINITY;  
//        w[i][j]=w[i][j-1]+p[j];  
//  
//        for(r1=i;r1<=j;r1++)  
//        {  
//            t=e[i][r1-1]+e[r1+1][j]+w[i][j];  
//            if(t<e[i][j])  
//            {  
//            e[i][j]=t;  
//            r[i][j]=r1;  
//            }  
//         }  
//        }  
//  
//     }  
//}  
////this function prints subtree  
//void construct_optimal_subtree(int i,int j, int r1, char *dir)  
//{  
//     int t;  
//     if(i<=j)  
//     {  
//    t=r[i][j];  
//    printf("\t %d is %s child of %d ",key[t],dir,key[r1]);  
//    construct_optimal_subtree(i,t-1,t,"left");  
//    construct_optimal_subtree(t+1,j,t,"right");  
//     }  
//}  
//// this function contructs binary tree. prints root  
//void construct_BST()  
//{  
//    int r1;  
//    r1=r[1][n];  
//    printf("\n %d is the root",key[r1]);  
//    construct_optimal_subtree(1,r1-1,r1,"left") ;  
//    construct_optimal_subtree(r1+1,n,r1,"right");  
//}  
//int main()  
//{  
//    int i,j;  
//    float prob=1.1;  
//    printf("enter the number of nodes");  
//    scanf("%d",&n);  
//    for(i=1;i<=n;i++)  
//    {  
//  
//        printf("\nenter the value of key: ");  
//        scanf("%d",&key[i]);  
//        printf("\n Prob of success ");  
//        scanf("%f",&p[i]);  
//        prob=prob-p[i];  
//        if(prob<0)  
//        {  
//            printf("\ntotal prob increased by 1 enter again");  
//            prob=prob+p[i];  
//            i--;  
//        }  
//    }  
//  
//    opttree();  
//  
//    printf("Average probe length is %f\n",e[1][n]/w[1][n]);  
//    printf("\ncost (e) matrix is\n");  
//    for(i=1;i<=n;i++)  
//    {  
//        for(j=1;j<=n;j++)  
//        {  
//            printf(" %.3f ",e[i][j]);  
//        }  
//        printf("\n");  
//    }  
//    printf("\n weight matrix is \n");  
//    for(i=1;i<=n;i++)  
//    {  
//        for(j=1;j<=n;j++)  
//        {  
//            printf(" %.3f ",w[i][j]);  
//        }  
//        printf("\n");  
//    }  
//    printf("\n root matrix is\n");  
//    for(i=1;i<=n;i++)  
//    {  
//        for(j=1;j<=n;j++)  
//        {  
//            printf(" %d ",r[i][j]);  
//        }  
//        printf("\n");  
//    }  
//    construct_BST();  
//    return 0;  
//} 