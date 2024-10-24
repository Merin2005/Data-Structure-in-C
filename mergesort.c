#include<stdio.h>
void merge(int a[], int beg, int mid, int end) 
{
    int i, j, k;
    int n1 = mid - beg + 1;
    int n2 = end - mid;
    int LeftArr[n1], RightArr[n2];
    for (int i = 0; i < n1; i++) {
        LeftArr[i] = a[beg + i];
    }
    for (int j = 0; j < n2; j++) {
        RightArr[j] = a[mid + 1 + j];
    }
    i = 0;
    j = 0;
    k = beg;
    while (i < n1 && j < n2) {
        if (LeftArr[i] <= RightArr[j]) {
            a[k] = LeftArr[i];
            i++;
        }
        else {
            a[k] = RightArr[j];
            j++;
        }
        k++;
    }
    while (i < n1) 
    {
        a[k] = LeftArr[i];
        i++;
        k++;
    }
    while (j < n2) 
    {
        a[k] = RightArr[j];
        j++;
        k++;
    }
}
void mergeSort(int a[], int beg, int end)
{
    if (beg < end) 
    {
        int mid = (beg + end) / 2;
        mergeSort(a, beg, mid);
        mergeSort(a, mid + 1, end);
        merge(a, beg, mid, end);
    }
}
void main()
{ 
  int i,n,a[20];
  printf("Enter the size of the array:");
  scanf("%d",&n);
  printf("Enter the elements:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Entered Array is:");
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
  printf("\n");
  mergeSort(a,0,n-1);
  printf("Sorted Array is:");
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
  printf("\n");
}                                                                                        
