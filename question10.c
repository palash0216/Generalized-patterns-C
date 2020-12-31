#include<stdio.h>
 int main()
{int k=1;
int row, col;
    printf("Enter the values for row and col \n");
    scanf("%d %d", &row, &col);
    for(int i=1;i<=row;i++)
    {
        for(int j=col-1;j>=i;j--)
        {printf(" ");}
        
        for(int p=1;p<=i;p++)
        {
            printf("%d",k);
            printf(" ");
        }k++;
        printf("\n");
    }return 0;
}
