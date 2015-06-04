#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//###########################################################################

void bubblesort(int set[],int n)
{

int i=0,j=0,temp=0;
for(i =0; i<n; i++)
{
    for(j =0; j<n; j++)
    {
        if(set[i] < set[j])
        {
            /*temp = set[i];
            set[i] = set[j];
            set[j] = temp;*/

            /*set[i] = set[i] + set[j];
            set[j] = set[i] - set[j];
            set[i] = set[i] - set[j];*/

            set[i] = (set[i])^(set[j]);
            set[j] = (set[i])^(set[j]);            
            set[i] = (set[i])^(set[j]);
        }
    }
}

printf("Sorted array using bubblesort : \n[  ");
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

bubblesort(set,len);


return 0;
}
