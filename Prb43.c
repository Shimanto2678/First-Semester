#include<stdio.h>
int main()
{
    int p,q;
    int j = 1;
    int x = 0;
    printf("Enter the number of lines : ");
    scanf("%d",&p);
    printf("Enter numbers in each line : ");
    scanf("%d",&q);
    for(int i = 1; i <= p; i ++)
    {
        while( x < q)
        {
            printf("%d ",j++);
           
            x++;


        }

        x = 0;

        printf("\n");


    }



}