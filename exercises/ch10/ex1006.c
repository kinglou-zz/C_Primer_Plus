#include <stdio.h>

void reverse(double arr[], int num);
void display_arr(const double arr[], int num);

int main(void)
{
    double arr[] = {1.1, 2.2, 3.3, 4.4, 12.12, 6.6, 7.7, 8.8, 9.9, 10.1};
    int num = sizeof(arr) / sizeof(arr[0]);
    
    printf("The array is ");
    display_arr(arr, num);
    
    reverse(arr, num);
    printf("The reverse array is ");
    display_arr(arr, num);

    return 0;
}

void reverse(double arr[], int num)
{
    double temp;
    for(int i = 0; i < num/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[num - 1 - i];
        arr[num - 1 - i] = temp;
    }
}

/*void reverse(double *arr, int num)
{
    for (int i = 0; i < num / 2; i++)
    {
        double temp = *(arr + i);
        *(arr + i) = *(arr + num - 1 - i);
        *(arr + num - 1 - i) = temp;
    }
}*/

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