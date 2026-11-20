#include <stdio.h>
#define SIZE 5

void display_array(const double arr[], int num);
void copy_arr(double target[], const double source[], int num);
void copy_ptr(double * target, const double * source, int num);
void copy_ptrs(double * target, const double * source, const double * end);

int main(void)
{
    double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[SIZE] = {0};
    double target2[SIZE] = {0};
    double target3[SIZE] = {0};

    printf("The array of source is ");
    display_array(source, SIZE);

    copy_arr(target1, source, SIZE);
    printf("The array of target1 is ");
    display_array(target1, SIZE);

    copy_ptr(target2, source, SIZE);
    printf("The array of target2 is ");
    display_array(target2, SIZE);

    copy_ptrs(target3, source, source + SIZE);
    printf("The array of target3 is ");
    display_array(target3, SIZE);

    return 0;
}

void display_array(const double arr[], int num)
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

void copy_arr(double target[], const double source[], int num)
{
    for(int i = 0; i < num; i++)
        target[i] = source[i];
}

void copy_ptr(double * target, const double * source, int num)
{
    for(int i = 0; i < num; i++)
        *(target + i) = *(source + i);
}

void copy_ptrs(double * target, const double * source, const double * end)
{
    while(source < end)
    {
        *target = *source;
        target++;
        source++;
    }
}