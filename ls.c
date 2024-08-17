#include <stdio.h>
void main()
 {
  int a[20],count=0,n,i,x,c=0;
  c++;
  c++;
  printf("Enter size of the element:");
  c++;
  scanf("%d",&n);
  c++;
  printf("Enter the number to be searched:");
  c++;
  scanf("%d",&x);
  c++;
  printf("Enter the elements:");
  c++;
  for (i=0;i<n;i++)
  {
   c++;
   scanf("%d",&a[i]);
   c++;
  }
  c++;
  for (i=0;i<n;i++)
  {
   c++;
   if(a[i]==x)
   {
    count++;
    printf("Item is found at location %d\n ",i+1);
    c++;
    c++;
   }
  }
  c++;
  if(count>0)
  {
   printf("Element is found %d times\n",count);
   c++;
   c++;
  }
  else
  {
   printf("Item not found\n");
   c++;
   c++;
  } 
  printf("Space complexity = %d\n",((5*4)+4*n));
  c++;
  c++;
  printf("Time complexity = %d\n",c);
 }
