#include<stdio.h>


int main()
{
    int r1,r2,c1,c2;
    printf("Digite o numero de linhas da primeira matriz:\n");
    scanf("%d",&r1);
    printf("Digite o numero de colunas da primeira matrix:\n");
    scanf("%d",&c1);
    printf("Digite o número de linhas da segunda matriz:\n");
    scanf("%d",&r2);
    printf("Digite o numero de colunas da segunda matriz:\n");
    scanf("%d",&c2);
    if(c1!=r2)
    {
        printf("Essa matriz nao pode ser multiplicada !");
    }
    else
    {
        int m1[r1][c1],m2[r2][c2];
        printf("Insira os elementos da primeira matriz: \n");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                scanf("%d",&m1[i][j]);
            }
        }
        printf("Insira os elementos da segunda matriz: \n");
        for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
                scanf("%d",&m2[i][j]);
            }
        }
        int mul[r1][c2];
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                mul[i][j]=0;

                for(int k=0;k<c1;k++)
                {
                    mul[i][j]+=m1[i][k]*m2[k][j];
                }
            }
        }
        printf("Multiplicacao da matriz: \n");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                printf("%d\t",mul[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
