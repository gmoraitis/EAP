// C code to linearly search x in arr[]. If x

#include <stdio.h>

int main(void)
{
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);

    int found = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            printf("Element %d is present at index %d \n", x, i);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Element %d is not present in array !! \n", x);
    }

    //return 0;
}