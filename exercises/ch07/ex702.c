#include <stdio.h>
#define SIZE 8
int main(void)
{
    int ch;
    int count = 0;
    printf("Please input chars (# to quit): \n");
    while((ch = getchar()) != '#')
    {
        if(count++ % SIZE == 0)
            printf("\n");
        
        if(ch == '\n')
            printf("\\n-%3d ", ch);
        else if(ch == '\t')
            printf("\\t-%3d ", ch);
        else
            printf("%c-%3d ", ch, ch);
    }
    return 0;
}