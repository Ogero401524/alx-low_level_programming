#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    int cents = atoi(argv[1]);

    if (cents < 0)
    {
        printf("0\n");
        return (0);
    }

    int coins[] = {25, 10, 5, 2, 1};
    int num_coins = 0;
    int i = 0;

    while (cents > 0)
    {
        if (cents >= coins[i])
        {
            cents -= coins[i];
            num_coins++;
        }
        else
        {
            i++;
        }
    }

    printf("%d\n", num_coins);

    return (0);
}
