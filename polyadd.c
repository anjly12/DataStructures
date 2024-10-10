#include<stdio.h>
#include<stdlib.h>
struct node{
int coeff;
int expo;
struct node*link;
};
struct node*createnode(int coeff,int expo){
struct node*newnode=(struct node*)malloc(sizeof(struct node));
newnode->coeff=coeff;
newnode->expo=expo;
newnode->link=NULL;
return newnode;
}
void insertnode(struct node**poly,int coeff,int expo){
struct node*newnode=createnode(coeff,expo);
if(*poly==NULL){
*poly=newnode;
}
else{
struct node*temp=*poly;
while(temp->link!=NULL){
temp=temp->link;
}
temp->link=newnode;
}
}
void polydisplay(struct node*poly){
while(poly!=NULL){
printf("%dx^%d",poly->coeff,poly->expo);
if(poly->link!=NULL&&poly->link->coeff>=0){
printf("+");
}
poly=poly->link;
}
printf("\n");
}
struct node*addpolynomials(struct node*poly1,struct node*poly2){
struct node*result=NULL;
while(poly1!=NULL&&poly2!=NULL){
if(poly1->expo>poly2->expo){
insertnode(&result,poly1->coeff,poly1->expo);
poly1=poly1->link;
}
else if(poly1->expo<poly2->expo){
insertnode(&result,poly2->coeff,poly2->expo);
poly2=poly2->link;
}
else{
int sumcoeff=poly1->coeff+poly2->coeff;
if(sumcoeff!=0){
insertnode(&result,sumcoeff,poly1->expo);
}
poly1=poly1->link;
poly2=poly2->link;
}
}
while(poly1!=NULL){
insertnode(&result,poly1->coeff,poly1->expo);
poly1=poly1->link;
}
while(poly2!=NULL){
insertnode(&result,poly2->coeff,poly2->expo);
poly2=poly2->link;
}
return result;
}
void main(){
struct node*poly1=NULL;
struct node*poly2=NULL;
struct node*sum=NULL;
int n,coeff,expo;
printf("Enter the no. of terms in the first polynomial:");
scanf("%d",&n);
printf("Enter the elements of the polynomial:-\n");
for(int i=0;i<n;i++){
printf("Enter the coefficient:");
scanf("%d",&coeff);
printf("Enter the exponent:");
scanf("%d",&expo);
insertnode(&poly1,coeff,expo);
}
printf("Enter the no. of terms in the second polynomial:");
scanf("%d",&n);
printf("Enter the elements of the polynomial:-\n");
for(int i=0;i<n;i++){
printf("Enter the coefficient:");
scanf("%d",&coeff);
printf("Enter the exponent:");
scanf("%d",&expo);
insertnode(&poly2,coeff,expo);
}
printf("First Polynomial:");
polydisplay(poly1);
printf("Second Polynomial:");
polydisplay(poly2);
sum=addpolynomials(poly1,poly2);
printf("\nSum of polynomials:");
polydisplay(sum);
}
