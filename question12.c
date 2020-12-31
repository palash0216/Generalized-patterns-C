#include <stdio.h>
int main()
{
    int num;
    //   int row, col;
    // printf("Enter the values for row and col \n");
    // scanf("%d %d", &row, &col);
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j >= i + 1 && j <= 9 - i)
            {
                printf(" ");
            }
            else
            printf("0");
            
        }
        printf("\n");
    }
    return 0;
}