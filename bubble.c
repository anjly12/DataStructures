#include <stdio.h>
void main()
{
  int array[100],n,i,j,x,t;
  t++;
  t++;
  printf("Enter number of elements\n");
  t++;
  scanf("%d", &n);  
  t++;
  printf("Enter %d integers\n", n);
  t++;
  for (i = 0; i < n; i++)
  scanf("%d", &array[i]);
  for (i = 0 ; i < n - 1; i++)
  {
    t++;
    for (j = 0 ; j<n-i-1;j++)
    {
      t++;
      if (array[j]>array[j+1])
      {
        x=array[j];
        array[j]=array[j+1];
        array[j+1]=x;
        t++;
        t++;
        t++;
        t++;
       }
     }
   }
 printf("Sorted list in ascending order:\n");
 for (i = 0; i< n;i++)
 printf("\t%d", array[i]);
 t++;
 t++;
 t++;
 printf("\nSpace complexity=%d\n",((5*4)+4*n));
 t++;
 t++;
 printf("Time complexity=%d",t);
}
