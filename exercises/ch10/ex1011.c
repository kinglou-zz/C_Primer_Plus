#include <stdio.h>

#define ROWS 3
#define COLS 5

void times_two_ptr2d(int rows, int cols, int (*source)[cols]);
void display_array2d(int rows, int cols, const int arr[][cols]);

int main(void)
{
    int source[ROWS][COLS] = {{1, 2, 3, 4, 5},
                              {2, 3, 4, 5, 6},
                              {3, 4, 5, 6, 7}};
    printf("The array of source is \n");
    display_array2d(ROWS, COLS, source);

    times_two_ptr2d(ROWS, COLS, source);
    printf("After times two, The array of source is \n");
    display_array2d(ROWS, COLS, source);

    return 0;
}

void times_two_ptr2d(int rows, int cols, int (*source)[cols])
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
            *(*(source + i) + j) = *(*(source + i) + j) * 2;
    }
}

void display_array2d(int rows, int cols, const int arr[][cols])
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
            printf("%d", arr[i][j]);
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