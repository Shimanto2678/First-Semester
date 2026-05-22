#include<stdio.h>
int main()
{   int money;
    printf("Enter the amount : ");
    scanf("%d",&money);

   int hundred = money / 100;
    printf("Amount of hundred taka note : %d\n",hundred);
    int fifty = (money - (hundred * 100) ) / 50;
    printf("Amount of fifty taka note : %d\n",fifty);
    int twenty = (money - (hundred * 100 + fifty * 50)) /20;
    printf("Amount of twenty taka note : %d\n",twenty);
    int ten = (money - (hundred * 100 + fifty * 50 + twenty * 20)) / 10;
    printf("Amount of ten taka note : %d\n",ten);
    int five = (money - (hundred * 100 + fifty * 50 + twenty * 20 + ten * 10)) / 5;
    printf("Amount of five taka note : %d\n",five);
    int two = (money - (hundred * 100 + fifty * 50 + twenty * 20 + ten * 10 + five * 5)) / 2;
    printf("Amount of two taka note : %d\n",two);
    int one = (money - (hundred * 100 + fifty * 50 + twenty * 20 + ten * 10 + five * 5 + two * 2)) /1 ;
    printf("Amount of one taka coin : %d\n",one);

    printf("Total coins or notes - %d",hundred + fifty + twenty + ten + five + two + one);





}