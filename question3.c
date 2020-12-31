#include <stdio.h>

int main()
{int k=65;
    int row, col;
    printf("Enter the values for row and col \n");
    scanf("%d %d", &row, &col);
    for (int i = 1; i <= row; i++)
    {
        for (int j = col; j >=i; j--)
        {
            printf("%c",k);
        }k++;
        printf("\n");
    }
    return 0;
}