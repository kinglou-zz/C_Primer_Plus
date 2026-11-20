#include <stdio.h>

#define NUM 4

void add_arr(const int * arr1, const int * arr2, int * result, int num);
void display_arr(const int arr[], int num);

int main(void)
{
    int arr1[NUM] = {2, 4, 5, 8};
    int arr2[NUM] = {1, 0, 4, 6};
    int result[NUM] = {0};

    printf("The array of arr1 is ");
    display_arr(arr1, NUM);
    printf("The array of arr2 is ");
    display_arr(arr2, NUM);

    add_arr(arr1, arr2, result, NUM);
    printf("The array of result is ");
    display_arr(result, NUM);

    return 0;
}

void add_arr(const int * arr1, const int * arr2, int * result, int num)
{
    for(int i = 0; i < num; i++)
        *(result + i) = *(arr1 + i) + *(arr2 + i);
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