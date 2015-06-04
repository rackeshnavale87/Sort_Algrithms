#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//###########################################################################

void merge(int a[], int low, int mid, int high)
{
 int b[10000];
    int i = low, j = mid + 1, k = 0;
  
    while (i <= mid && j <= high) {
        if (a[i] <= a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }
    while (i <= mid)
        b[k++] = a[i++];
  
    while (j <= high)
        b[k++] = a[j++];
  
    k--;
    while (k >= 0) {
        a[low + k] = b[k];
        k--;
    }
}
 
/* start is for left index and last is right index of the sub-array of arr to be sorted */
void mergesort(int set[], int start, int last)
{
int i=0;
    if (start < last)
    {
        int mid = start +(last - start)/2; //Same as (start+last)/2, but avoids overflow
        mergesort(set, start, mid);
        mergesort(set, mid+1, last);
        merge(set, start, mid, last);
    }
    printf("Sorted array using selection sort : \n[  ");
    for(i =0; i<last+1; i++)
    {
        printf("%d  ",set[i]);
    }
    printf("]\n");
}


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


mergesort(set,0,len-1);


return 0;
}
