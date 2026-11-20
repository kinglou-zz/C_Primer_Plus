#include <stdio.h>

double diff_arr(const double arr[], int num);
void display_arr(const double arr[], int num);

int main(void)
{
    double arr[] = {1.1, 2.2, 3.3, 4.4, 12.12, 6.6, 7.7, 8.8, 9.9, 10.1};
    int num = sizeof(arr) / sizeof(arr[0]);
    
    printf("The array is ");
    display_arr(arr, num);
    printf("the maximum difference is %g\n", diff_arr(arr, num));

    return 0;
}

double diff_arr(const double arr[], int num)
{
    double max = arr[0];
    double min = arr[0];
    for(int i = 0; i < num; i++)
    {
        if(max < arr[i])
            max = arr[i];
        if(min > arr[i])
            min = arr[i];
    }

    return max - min;
}

void display_arr(const double arr[], int num)
{
    printf("[");
    for(int i = 0; i < num; i++)
    {
        printf("%g", arr[i]);
        if(i != num - 1)
            printf(" ");
    }
    printf("]\n");
}