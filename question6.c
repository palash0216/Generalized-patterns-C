#include<stdio.h>

int main() 
{
      int row, col;
    printf("Enter the values for row and col \n");
    scanf("%d %d", &row, &col);
    for(int i=1;i<=row;i++)
    {
        for(int j=col;j>=i;j--)
        {
        printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%d",i);
        }
        printf("\n");
}
return 0;
}