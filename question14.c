#include <stdio.h>

int main()
{int k=1;
    int row, col;
    printf("Enter the values for row and col \n");
    scanf("%d %d", &row, &col);
    for (int i = 1; i <= row; i++)
    {
        for (int j=1;j<=col;j++)
        {
           if(j>=6-i&&j<=4+i&&j>=i-4&&j<=14-i)
           printf("%d",k++);
           else
           printf(" ");
        }k=1;
       printf("\n");
    }
    return 0;
}