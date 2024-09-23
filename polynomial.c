#include<stdio.h>
struct poly
{
 int coeff;
 int ex;
};
void main()
{
 int n,i;
 printf("Enter the number of terms for the polynomial\n");
 scanf("%d",&n);
 struct poly x[n];
 printf("Enter the elements of the polynomial \n");
 printf("Coefficients and exponents should be in descending order\n");
 for(i=0;i<n;i++)
 {
  printf("Coefficient:");
  scanf("%d",&x[i].coeff);
  printf("\nExponent:");
  scanf("%d",&x[i].ex);
 }
 printf("The entered elements in polynomial form:\n");
 for(i=0;i<n;i++)
 {
  printf("(%dx ^%d)",x[i].coeff,x[i].ex);
  if ((i<n-1))
  printf(" + ");
 }
}
