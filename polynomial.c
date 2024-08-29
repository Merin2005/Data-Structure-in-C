#include <stdio.h>
struct poly
{
 int coeff;
 int expo;
};
void main()
{
 int n,i=0;
 printf("Enter the number of terms in the polynomial:");
 scanf("%d",&n);
 struct poly x[n];
 printf("Enter the elements of polynomial \n");
 printf("Enter the coefficient term and exponent term in descending order \n");
 for(i=0;i<n;i++)
 {
    printf("Enter the coefficient term:");
    scanf("%d",&x[i].coeff);
    printf("Enter the exponent term:");
    scanf("%d",&x[i].expo);
 }
 printf("The polynomial is :");
 for(i=0;i<n;i++)
 {
    printf("%dx^%d",x[i].coeff,x[i].expo);
    if(i<n-1)
    {
     printf("+");
    }
 }
}
