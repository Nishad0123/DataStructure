#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    int i=0,j=0;
    printf("Enter values\n");
    int** x = malloc(sizeof(int)*3);
    
    for(int i = 0; i < 3; i++)
    {
    x[i] = malloc(sizeof(int)*5);
    
        for(int j = 0; j < 5; j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("val=%d\n",x[i][j]);
        }
    }
}

