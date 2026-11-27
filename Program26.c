#include <stdio.h>

int main()
{
    int n = 20;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 15; j++)
        {
            if((i + j) % 12 == 0 ||
               (i - j + 12) % 12 == 0)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
