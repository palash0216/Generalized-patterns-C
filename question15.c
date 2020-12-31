#include <stdio.h>

int main()
{
    int row, col;
    printf("Enter the values for row and col \n");
    scanf("%d %d", &row, &col);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == row || j == col || i == 1 || j == 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}