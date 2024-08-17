#include <stdio.h>
void main()
 {
  int n,i,key,j,t=0,a[80];
  t++;
  printf("Enter number of the element:"); 
  t++;
  scanf("%d",&n);
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
  printf("The array read by user is \n");
  t++;
  for (i=0;i<n;i++)
  {
   t++;
   printf("%d\t",a[i]);
   t++;
  }
  t++;
  printf("\n");
  t++;
  for (i=0;i<n;i++)
  { 
   t++;
   key=a[i];
   t++;
   j=i-1;
   t++;
   while(j>=0 && a[j]>key)
   {
   t++;
   a[j+1]=a[j];
   t++;
   j--;
   }
   t++;
   a[j+1]=key;
   t++;
  }
  t++;
  printf("\nSorted array \n");
  t++;
  for (i=0;i<n;i++)
  {
   t++;
   printf("%d\t",a[i]);
   t++;
  }
  t++;
  printf("\n");
  t++;
  printf("Space complexity = %d\n",((5*4)+4*n));
  t++;
  t++;
  printf("Time complexity = %d",t);
 }   
