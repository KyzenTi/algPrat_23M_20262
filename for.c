#include <stdio.h>

int main()
{

    int i, falso = 0;

    for (i = 0; i <= 10; i += 2)
    {
        printf("op-atrib: %i \n", i);
        falso = i + 1;
    }
    printf("\nFalso: %i \n", falso);

    printf("-------------------\n");
    for (i = 0; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            continue;

            printf("op-cond: %i\n", i);
        }
        falso = i + 1;
    }
    printf("\nFalso: %i \n ", falso);

    printf("-------------------\n");
    for (i = 0; i <= 10; i++)
    {

        if (i == 5)
        {
            break;
        }
        falso = i + 1;
        printf("output: %i\n", i);
    }
    printf("\nFalso: %i \n ", falso);

    printf("-------------------\n");

    for (i = 0; i <= 10; i++)
    {
        if (i < 3 || i > 7)
        {
            continue;
        }
        printf("continue: %i\n", i);
        falso = i + 1;
    }

    return 0;
}
