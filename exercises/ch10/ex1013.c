#include <stdio.h>

#define ROWS 3
#define COLS 5

void input_array_numbers(double arr[], int num);
double calc_average_array(const double arr[], int num);
double calc_average_all(int rows, int cols, const double arr[][cols]);
double max_all(int rows, int cols, const double arr[][cols]);
void display_array2d(int rows, int cols, const double arr[][cols]);

int main(void)
{
    int i;
    double arr[ROWS][COLS];

    for(i = 0; i < ROWS; i++)
    {
        printf("Enter %d numbers for %d:\n", COLS, i + 1);
        input_array_numbers(arr[i], COLS);
    }
    printf("\nThe array is\n");
    display_array2d(ROWS, COLS, arr);

    printf("\nGroup    AVERAGE\n");
    for (i = 0; i < ROWS; i++) {
        printf("%3d %10.1f\n", i + 1, calc_average_array(arr[i], COLS));
    }

    printf("\nThe average of numbers is %.2f.\n", calc_average_all(ROWS, COLS, arr));
    printf("The largest value is %g.\n", max_all(ROWS, COLS, arr));

    printf("Bye!\n");
    return 0;
}

void input_array_numbers(double arr[], int num)
{
    for(int i = 0; i < num; i++)
        scanf("%lf", &arr[i]);
}

double calc_average_array(const double arr[], int num)
{
    double total = 0;
    for(int i = 0; i < num; i++)
        total += arr[i];
    
    return total / num;
}

double calc_average_all(int rows, int cols, const double arr[][cols])
{
    double total = 0;
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            total += arr[i][j];
    
    return total / (rows * cols);
}

double max_all(int rows, int cols, const double arr[][cols])
{
    if(rows <= 0 || cols <= 0)
        return 0;

    double max = arr[0][0];
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            if(max < arr[i][j])
                max = arr[i][j];

    return max;
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