#include <stdio.h>
int main()
{
    int num = 0;
    int row, col;
    printf("Enter the values for row and col \n");
    scanf("%d %d", &row, &col);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (j >= 6 - i && j <= 4 + i)
            {
                
               printf("%d",j-5);
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