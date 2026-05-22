#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int result[n];

    for (int z = 0; z < n; z++)
    {
        int per, age;
        scanf("%d %d", &per, &age);

        int person[per];
        int out = 0;

        for (int y = 0; y < per; y++)
        {
            scanf("%d", &person[y]);
            out = out + (person[y] - age);
        }

        if (out > 0)
            result[z] = 1;
        else if (out < 0)
            result[z] = -1;
        else
            result[z] = 0;
    }


    for (int i = 0; i < n; i++)
    {
        if (result[i] == 1)
            printf("No Ragging at PSTU\n");
        else if (result[i] == -1)
            printf("Jayga nia suru kor\n");
        else
            printf("Room 404 a dekha korish\n");
    }

    return 0;
}