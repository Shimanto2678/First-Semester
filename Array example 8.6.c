
#include <stdio.h>

int main()
{
    int i, j, car;
    int frequency[5][5] = {0};
    char city;

    printf("For each person, enter the city code\n");
    printf("followed by the car code.\n");
    printf("Enter X to indicate end.\n\n");

    /* TABULATION BEGINS */
    for (i = 1; i < 100; i++)
    {
        scanf(" %c", &city);

        if (city == 'X' || city == 'x')
            break;

        scanf("%d", &car);

        switch (city)
        {
            case 'B': case 'b': frequency[1][car]++; break;
            case 'C': case 'c': frequency[2][car]++; break;
            case 'D': case 'd': frequency[3][car]++; break;
            case 'M': case 'm': frequency[4][car]++; break;
            default:
                printf("Invalid city code\n");
        }
    }

    /* PRINTING BEGINS */
    printf("\n\nPOPULARITY TABLE\n\n");
    printf("City      Ambassador   Fiat   Dolphin   Maruti\n");

    for (i = 1; i <= 4; i++)
    {
        switch (i)
        {
            case 1: printf("Bombay   ");  break;
            case 2: printf("Calcutta ");  break;
            case 3: printf("Delhi    ");  break;
            case 4: printf("Madras   ");  break;
        }

        for (j = 1; j <= 4; j++)
            printf("%7d      ", frequency[i][j]);

        printf("\n");
    }

    return 0;
}