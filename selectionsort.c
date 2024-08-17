#include <stdio.h>
void main()
 {
  int n,i,j,small,temp,t=0;
  t++;
  printf("Enter number of elements:"); 
  t++;
  scanf("%d",&n);
  t++;
  int a[n];
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
  for(i=0;i<n;i++)
  {
   t++;
   small=i;
   t++;
   for(j=i+1;j<n;j++)
   {
    t++;
    if(a[small]>a[j])
    {
     small=j;
     t++;
     t++;
    }
   }
   t++;
   if(i!=small)
    {
     temp=a[i];
     a[i]=a[small];
     a[small]=temp;
     t++;
     t++;
     t++;
     t++;
    }
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
  printf("Space complexity = %d\n",((6*4)+4*n));
  t++;
  t++;
  printf("Time complexity = %d\n",t);
 }   

 
    
   
  
