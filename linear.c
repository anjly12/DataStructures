#include<stdio.h>
void main()
{
 int count=0,n,i,x,a[20],t=0;
 t++;
 t++;
 printf("Enter size of the element");
 t++;
 scanf("%d",&n);
 t++;
 printf("Enter the element to be searched");
 t++;
 scanf("%d",&x);
 t++;
 printf("Enter the elements ");
 t++;
 for(i=0;i<n;i++)
  { 
    t++;
    scanf("%d",&a[i]);
    t++;
  }
  t++;
  for(i=0;i<n;i++)
  {
   t++;
   if (a[i]==x)
   {
    count++;
    printf("The element is found at position %d\n",i+1);
    t++;
    t++;
   }
  }
   t++;
   if (count>0)
   {
    printf("The element is found %d times\n",count);
    t++;
   }
   else
   { 
    printf("The element is not found in the list\n");
    t++;
   }
printf("Space complexity=%d\n",((5*4)+4*n));
t++;
t++;
printf("Time complexity=%d\n",t);
}
