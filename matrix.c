#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],m,n,p,q,i,j,k;
 printf("Enter the number of rows and columns of first matrix\n");
 scanf("%d%d",&m,&n);
 printf("enter the elements of matrix a \n");
 for(i=0;i<m;i++)
 {
     for(j=0;j<n;j++)
     {
          scanf("%d",&a[i][j]);
     }
 }
 printf("Enter the number of rows and columns of second matrix\n");
 scanf("%d%d",&p,&q);
 printf("enter the elements of matrix b \n");
 for(i=0;i<p;i++)
 {
     for(j=0;j<q;j++)
     {
          scanf("%d",&b[i][j]);
     }
 }
 if(n==p)
 { printf("The product of the matrices is \n");
 for(i=0;i<m;i++)
 {
     for(j=0;j<q;j++)
     {
         c[i][j]=0;
         for(k=0;k<n;k++)
         {
             c[i][j]+=a[i][k]*b[k][j];
         }
printf("%d\t",c[i][j]);
     }
 }
printf("\n");}
 else
 {
     printf("Matrix multiplication is not possible\n");
     return 0;
 }}