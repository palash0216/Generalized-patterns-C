#include<stdio.h>

int main() 
{int num=65;
      int row, col;
    printf("Enter the values for row and col \n");
    scanf("%d %d", &row, &col);
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(j<=row+1-i)
            printf("%d%c",j,num++);
            
        }num=65;
        printf("\n");
    }
     return 0;
}