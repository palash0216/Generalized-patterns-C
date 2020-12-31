#include<stdio.h>

int main() 
{
     for(int i=1;i<=7;i++)
    {
        for(int j=1;j<=9;j++)
        {
            if(j>=7-i && j<=3+i)
            printf(" ");
            else if (j>5-i && j<5+i)
            printf("%d",i);
           
            else
            printf(" ");  
              
      }printf("\n");
       for(int k=6;k<=9;k++)
       {
           if (k>i-3 && k<11-i)
            printf("%d",i);
            else
            {
                printf(" ");
            }
            
       }
 }
     return 0;
}