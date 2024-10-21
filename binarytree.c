#include<stdio.h>
#include<stdlib.h>
void main()
{
   int n,i,pos;
   printf("Enter the total number of elements in the tree:\n");
   scanf("%d",&n);
   int a[n];
   printf("Enter the element:\n");
   for(i=1;i<=n;i++)
   {
     scanf("%d",&a[i]);
   }
   printf("Binary Tree is: ");
    for(i=1;i<=n;i++)
   {
    printf("%d ",a[i]);
   }
   printf("\nEnter the position of the element:\n");
   scanf("%d",&pos);
   if (pos>=n)
   {
    printf("Invalid Input!\n");
    exit(0);
   }
   if((pos/2)!=0)
     printf("Parent of %d is:%d\n",a[pos],a[pos/2]);
   else
     printf("No Parent!\n");
   if(2*pos>n)
      printf("No Left Child!\n");
   else
     printf("Left child of %d is: %d\n",a[pos],a[2*pos]);
   if((2*pos)+1>n)
     printf("No right child!\n");
   else
   printf("Right child of %d is: %d\n",a[pos],a[(2*pos)+1]);
   }
