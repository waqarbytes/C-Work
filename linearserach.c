#include <stdio.h>
int main()
{
    int arr[10], j, i, n, flag = 0;
    printf("Enter the element of array");
    for (i = 0; i <= 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be Search:");
    scanf("%d", &n);
    for (j = 0; j <= 10; j++)
    {
        if (arr[j] == n)
        {
            printf("The Element is present in the array");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("The element is not present in the array ");
    }
    
    return 0;
}