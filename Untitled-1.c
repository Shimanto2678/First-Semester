#include<stdio.h>
int main()
{
    int N;

    int i = 1;

    int sum = 0;

    for ( int j = 0 ; j <= N ; j++)

    {
        sum = sum + i;
        i = i + 1;
    }

    printf("%d",sum);
}