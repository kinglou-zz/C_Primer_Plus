#include <stdio.h>

#define ROWS 3
#define COLS 5

void copy_ptr2d(int rows, int cols, double (*target)[cols], const double (*source)[cols]);
void display_array2d(int rows, int cols, const double arr[][cols]);

int main(void)
{
    double source[ROWS][COLS] = {{1.1, 2.2, 3.3, 4.4, 5.5},
                                 {3.3, 4.4, 4.4, 5.5, 6.6},
                                 {5.5, 6.6, 7.7, 8.8, 9.9}};
    double target[ROWS][COLS];
    printf("The array of source is \n");
    display_array2d(ROWS, COLS, source);

    copy_ptr2d(ROWS, COLS, target, source);
    printf("The array of target is \n");
    display_array2d(ROWS, COLS, target);

    return 0;
}

void copy_ptr2d(int rows, int cols, double (*target)[cols], const double (*source)[cols])
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
            *(*(target + i) + j) = *(*(source + i) + j);
    }
}

void display_array2d(int rows, int cols, const double arr[][cols])
{
    printf("[");
    for(int i = 0; i < rows; i++)
    {
        if(i == 0)
            printf("[");
        else
            printf(" [");
        for(int j = 0; j < cols; j++)
        {
            printf("%g", arr[i][j]);
            if(j != cols - 1)
                printf(" ");
        }
        if(i != rows - 1)
            printf("],\n");
        else
            printf("]");
    }
    printf("]\n");
}