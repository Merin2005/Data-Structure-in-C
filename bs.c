#include <stdio.h>
void main()
 {
  int n,i,x,left=0,right,mid,flag=0,t=0;
  t++;
  t++;
  t++;
  printf("Enter size of the element:");
  t++;
  scanf("%d",&n);
  t++;
  int a[n];
  printf("Enter the number to be searched:");
  t++;
  scanf("%d",&x);
  t++;
  right=n-1;
  t++;
  printf("Enter the elements:");
  t++;
  for (i=0;i<n;i++)
  {
   t++;
   scanf("%d",&a[i]);
   t++;
  } 
  t++;
  while(left<=right)
  {
  t++;
  mid = (left+right)/2;
  t++;
   if(x==a[mid])
   { 
    printf("Element is found at location\t%d",mid+1);
    flag=1;
    break;
    t++;
    t++;
    t++;
   }
   else if(x>a[mid])
   {
    left=mid+1;
    t++;
    t++;
   }
   else if(x<a[mid])
   {
    right=mid-1;
    t++;
    t++;
   }
  }
  t++;
  
  if(flag==0)
  {
   printf("Element is not found");
   t++;
   t++;
  }
  
  
  
  printf("\nSpace complexity = %d\n",((8*4)+4*n));
  t++;
  t++;
  printf("Time complexity = %d\n",t);
 }
 
