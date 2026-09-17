#include <stdio.h>
int main(void)
{
    float download_speed;
    float file_size;
    printf("Enter the download speed in Mbps and the file size in MB:\n");
    scanf("%f %f", &download_speed, &file_size);
    printf("At %.2f megabits per second, ", download_speed);
    printf("a file of %.2f megabytes downloads in %.2f seconds.\n", file_size, (file_size * 8) / download_speed);

    return 0;
}