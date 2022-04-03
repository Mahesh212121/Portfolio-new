#include <stdio.h>
#define MAX_SIZE 1000 

int main()
{
    int arr[MAX_SIZE];
    int i, N,X;
    float a=0,b;
    printf("Enter the size of array\n");
    scanf("%d", &N);
    printf("Enter %d elements of the array", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search\n");
    scanf("%d",&X);
    for(i=0; i<N; i++)
    {
        if(arr[i]==X)
        {
            a=a+1;
        }
    }
    b=a/N;
    printf("The probability to find the given element is %f ", b);

    return 0;
}
