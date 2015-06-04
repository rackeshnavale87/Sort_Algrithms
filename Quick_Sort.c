#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//###########################################################################

void quicksort( int a[], int low, int high )
{
 int pivot,i;
 // Termination condition!
 if ( high > low )
 {
  pivot = partition( a, low, high );
  quicksort( a, low, pivot-1 );
  quicksort( a, pivot+1, high );
 }

    printf("Sorted array using Quick sort : \n[  ");
    for(i =0; i<high+1; i++)
    {
        printf("%d  ",a[i]);
    }
    printf("]\n");

} //end quicksort
 
int partition( int a[], int low, int high )
{
 int left, right,temp;
 int pivot_item;
 int pivot = left = low;
 pivot_item = a[low];
 right = high;
 while ( left < right )
 {
  // Move left while item < pivot
  while( a[left] <= pivot_item )
   left++;
  // Move right while item > pivot
  while( a[right] > pivot_item )
   right--;
  if ( left < right )
  {
     temp=a[left];
     a[left]=a[right];
     a[right]=temp;
  }
 }
 // right is final position for the pivot
 a[low] = a[right];
 a[right] = pivot_item;
 return right;
}//end partition

//###########################################################################
//###########################################################################


int main()
{

int set[100];
int len=0,i=0,j=0;

printf("Enter the number of elements :");
scanf("%d",&len);

printf("Enter elements : ");
for(i=0;i<len;i++)
scanf("%d",&set[i]);


quicksort(set,0,len-1);


return 0;
}
