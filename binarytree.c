#include<stdio.h>
void main()
{
 int n,i,k;
 printf("Enter the number of elements in the tree:");
 scanf("%d",&n);
 int a[n];
 printf("Enter the elements:\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Enter the position of the element:");
 scanf("%d",&k);
 if(k==0)
 printf("No element at the position 0\n");
 else
 {
  if(k/2==0)
  printf("No Parent!\n");
  else
  printf("Parent Node of %d=%d\n",a[k],a[k/2]);
  if(2*k>n)
  printf("No Left Child!\n");
  else
  printf("Left Child of %d=%d\n",a[k],a[2*k]);
  if((2*k)+1>n)
  printf("No Right Child!\n");
  else
  printf("Right Child of %d=%d\n",a[k],a[(2*k)+1]);
  }
  }
