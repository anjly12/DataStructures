#include<stdio.h>
int main()
{
 int n,i,key,j,t=0;
 printf("Enter the number of elements:");
 scanf("%d",&n);
 int a[n];
 printf("Enter %d elements:\n",n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Orginal array:\n");
 for(i=0;i<n;i++)
 {
  printf("%d\t",a[i]);
 }
 printf("\n");
 for(i=0;i<n;i++)
 {
  key=a[i];
  j=i-1;
while (j>=0 && a[j]>key)
 { 
  a[j+1]=a[j];
  j--;
 }
 a[j+1]=key;
 }
 printf("The sorted array is:\n");
 for (i=0;i<n;i++)
 {
  printf("%d\t",a[i]);
 }
 printf("\n");
}
