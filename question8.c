#include<stdio.h>
int main() 
{
    int row, col;
    printf("Enter the values for row and col \n");
    scanf("%d %d", &row, &col);
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
    printf("%d  ",j*j);
        }
        printf("\n");
}
return 0;
}