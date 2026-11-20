#include <stdio.h>

int max_arr(const int arr[], int num);
void display_arr(const int arr[], int num);

int main(void)
{
    int arr[] = {1, 2, 3, 4, 12, 6, 7, 8, 9, 10};
    int num = sizeof(arr) / sizeof(arr[0]);
    
    printf("The array is ");
    display_arr(arr, num);
    printf("The largest value is %d\n", max_arr(arr, num));

    return 0;
}

int max_arr(const int arr[], int num)
{
    int max = arr[0];
    for(int i = 0; i < num; i++)
    {
        if(max < arr[i])
            max = arr[i];
    }

    return max;
}

void display_arr(const int arr[], int num)
{
    printf("[");
    for(int i = 0; i < num; i++)
    {
        printf("%d", arr[i]);
        if(i != num - 1)
            printf(" ");
    }
    printf("]\n");
}