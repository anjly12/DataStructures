#include<stdio.h>
void main()
{
 int n,i,mid,x,left=0,right,a[100],flag=0,t=0;
 t++;
 t++;
 t++;
 printf("Enter the no: of elements\n");
 t++;
 scanf("%d",&n);
 t++;
 printf("Enter %d integers\n",n);
 t++;
 for (i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  t++;
 }
  t++;
 right=(n-1);
 t++;
 printf("Enter the element to be searched");
 t++;
 scanf("%d",&x);
 t++;
 while(left<=right)
 {
  mid=(left+right)/2;
  if (x==a[mid])
  {
    flag=1;
    break;
  }
  else if (x>a[mid])
  {
   left=mid+1;
   continue;
  }
  else if (x<a[mid])
  {
   right=mid-1;
   continue;
  }
 }
  t++;
  t++;
  t++;
  t++;
  if (flag==1)
    printf("Element is found \n");
  else 
    printf("Element is not found \n");
    t++;
    t++;
 printf("Space complexity=%d\n",((8*4)+4*n));
t++;
t++;
printf("Time complexity=%d\n",t);
}
