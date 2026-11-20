#include <stdio.h>

void copy_ptr(int * target, const int * source, int num);
void display_array(const int arr[], int num);

int main(void)
{
    int source[7] = {1, 2, 3, 4, 5, 6, 7};
    int target[3] = {0};

    printf("The array of arr is ");
    display_array(source, 7);

    copy_ptr(target, source + 2, 3);
    printf("The array of target is ");
    display_array(target, 3);

    return 0;
}

void copy_ptr(int * target, const int * source, int num)
{
    for(int i = 0; i < num; i++)
        *(target + i) = *(source + i);
}

void display_array(const int arr[], int num)
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