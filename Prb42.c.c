#include<stdio.h>
int main(){
    int a;
    int i = 1;
    
    printf("Enter row : ");
    scanf("%d",&a);

    while(i <= a)
    {
        printf("%d %d %d\n",i,i*i,i*i*i);
        i++;

    }
}