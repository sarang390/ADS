#include <stdio.h>
void main() 
{
int arr1[100], arr2[100], arr3[100], m, n, k,tem;
  printf("\n Enter the size of 1st array  ");
  scanf("%d", &m);
  printf("\n Enter the size of 2nd array ");
  scanf("%d", & n);
  printf("\n Enter the elements of 1st array\n");
  for (int i = 0; i < m; i++) {
    scanf("%d", & arr1[i]);
  }for ( i = 0; i < m; i++) //Sorting the array
  {
   for (int j = i + 1; j < m; j++) {
      if (arr1[i] > arr1[j]) {
        tem = arr1[i];
        arr1[i] = arr1[j];
        arr1[j] = tem;
      }
    }
   k = m;
  printf("\nEnter the elements of 2nd array \n");
  for (int i = 0; i <n; i++) 
  {
    scanf("%d", & arr2[i]);
  }
for ( i = 0; i < n; i++) 
  {
 for ( j = i + 1; j < n; j++) {
      if (arr2[i] > arr2[j]) {
        tem = arr2[i];
        arr2[i] = arr2[j];
        arr2[j] = tem;
      }
    }
}
  printf("\n The merged array after sorting\n\t");
  for (int i = 0; i < s3; i++) //Sorting the array
  {
    int tem;
    for (int j = i + 1; j < s3; j++) {
      if (arr3[i] > arr3[j]) {
        tem = arr3[i];
        arr3[i] = arr3[j];
        arr3[j] = tem;
      }
    }
  }
for(i=0;i<m;i++)
{
arr3[k]=arr1[i];
}
k=m;
for(i=0;i<n;i++)
{
arr3[k]=arr2[i];
}printf("the sorted array \n");
for (int i = 0; i < s3; i++) 
{for (int j = i + 1; j < m; j++) {
      if (arr1[i] > arr1[j]) {
        tem = arr1[i];
        arr1[i] = arr1[j];
        arr1[j] = tem;
      }
    }}

  for (int i = 0; i < s3; i++) 
  {
    printf(" %d ", arr3[i]);
  }
}
