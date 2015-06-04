#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//###########################################################################

selectionsort(int set[],int n)
{
     int i;
     for (i = 0; i < n - 1; ++i)
     {
          int j, min, temp;
          min = i;
          for (j = i+1; j < n; ++j)
          {
               if (set[j] < set[min])
                    min = j;
          }

          temp = set[i];
          set[i] = set[min];
          set[min] = temp;
     }

printf("Sorted array using selection sort : \n[  ");
for(i =0; i<n; i++)
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

selectionsort(set,len);

return 0;
}
