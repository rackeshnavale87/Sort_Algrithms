#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//###########################################################################

void downHeap(int a[], int root, int bottom)
{
     int maxchild, temp, child;
     while (root*2 < bottom)
     {
          child = root * 2 + 1;
          if (child == bottom)
          {
               maxchild = child;
          }
          else
          {
               if (a[child] > a[child + 1])
                    maxchild = child;
               else
                    maxchild = child + 1;
          }

          if (a[root] < a[maxchild])
          {
               temp = a[root];
               a[root] = a[maxchild];
               a[maxchild] = temp;
          }
          else return;

          root = maxchild;
     }
}

void heapsort(int a[], int array_size)
{
     int i;
     for (i = (array_size/2 -1); i >= 0; --i)
     {
          downHeap(a, i, array_size-1);
     }

     for (i = array_size-1; i >= 0; --i)
     {
          int temp;
          temp = a[i];
          a[i] = a[0];
          a[0] = temp;
          downHeap(a, 0, i-1);
     }

printf("Sorted array using selection sort : \n[  ");
for(i =0; i<array_size; i++)
{
    printf("%d  ",a[i]);
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

heapsort(set,len);

return 0;
}
