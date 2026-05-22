#include<stdio.h>
int main()
{   char a,b,c;
    printf("Enter the character 1 : ");
    scanf(" %c",&a);
    printf("Enter the character 2 : ");
    scanf(" %c",&b);
    printf("Enter the character 3 : ");
    scanf(" %c",&c);

    printf("The reverse order of %c %c %c is %c %c %c",a,b,c,c,b,a);
    return 0;
}