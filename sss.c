#include<stdio.h>
#include<conio.h>
int sum (int x,int y);
int main(){
    int result;
    printf("Hello world");
    result = sum (5,6);
    printf("%d",result);
    return 0;
}

int sum ( int x, int y)
    {
        int result = 0;
        result = x + y;
        return sum;
    }