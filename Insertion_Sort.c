#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//###########################################################################

void insertionsort(int set[], int n)
{
int i=0,j=0,temp=0;
for(i = 1; i<n; i++)
{
    j=i;
    while(j>0)
    {
        if(set[j] < set[j-1])
        {
            set[j] = (set[j])^(set[j-1]);
            set[j-1] = (set[j])^(set[j-1]);            
            set[j] = (set[j])^(set[j-1]);            
        }
        j--;
    }
}

printf("Sorted array using insertion sort : \n[  ");
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

insertionsort(set,len);

return 0;
}
