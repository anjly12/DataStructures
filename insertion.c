#include<stdio.h>
int main()
{
 int n,i,key,j,t=0;
 printf("Enter the number of elements:");
 scanf("%d",&n);
 t++;
 int a[n];
 t++;
 printf("Enter %d elements:\n",n);
 t++;
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  t++;
  t++;
 }
 printf("Orginal array:\n");
 t++;
 for(i=0;i<n;i++)
 {
  printf("%d\t",a[i]);
  t++;
  t++;
 }
 printf("\n");
 t++;
 for(i=0;i<n;i++)
 {
  key=a[i];
  j=i-1;
  t++;
  t++;
while (j>=0 && a[j]>key)
 { 
  a[j+1]=a[j];
  j--;
  t++;
  t++;
 }
 a[j+1]=key;
 t++;
 }
 printf("The sorted array is:\n");
 t++;
 for (i=0;i<n;i++)
 {
  printf("%d\t",a[i]);
  t++;
 }
 t++;
 printf("\n");
 t++;
 printf("Space complexity=%d\n",((5*4)+4*n));
t++;
t++;
printf("Time complexity=%d\n",t);
}
 
 
 
