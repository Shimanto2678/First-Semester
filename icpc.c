#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

   for (int i = 1 ; i <= n; i++)
   {  



    int row , col;
    scanf("%d %d ",&row, &col);


    for (int j = 1; j <=row; j++)
    {
        for(int k = 1 ; k <= col ; k++)
        {   int arr[col];
            scanf("%d ",&arr[col]);
        }

        

        printf("\n");
    }






















   }


   return 0;

}