#include<stdio.h>
main()
{   float X,Y;
    printf("Enter the cordinate of X : ");
    scanf("%f",&X);
    printf("Enter the cordinate of Y : ");
    scanf("%f",&Y);

    if (X > 0 && Y > 0){
        printf("First cordinate");
    
    }
    else if(X < 0 && Y > 0){
        printf("Second cordinate");
    
    }
    else if(X < 0 && Y < 0){
        printf("Third cordinate");
    }
    else if( X > 0 && Y < 0){
        printf("Fourth cordinate");

    }
    else{
            printf("Number is on 0,0");
    }


}