#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    printf("Enter the Number of elements in the array : ");
    scanf("%d",&num);
    printf("The number of elements in the array is %d\n",num);
    int arr[num];
    int i =0;
    printf("Number of elements of the arrays is \n");

    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<num;i++)
    {
        printf("Element at %d is %d \n",i,arr[i]);
    }

    return 0;
}
