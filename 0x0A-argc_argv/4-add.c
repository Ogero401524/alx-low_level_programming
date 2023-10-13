#include <stdio.h>
/**
 * check_positive_number - Check if a string is a positive number.
 * @str: The string to check.
 * Return: 1 if it's a positive number, 0 otherwise.
 */
int check_positive_number(const char *str) {
    if (*str == '\0')
        return 0;

    while (*str)
    {
        if (*str < '0' || *str > '9')
            return 0;
	else
        str++;
    }

    return 1;
}
/**
 * custom_atoi - Convert a string to an integer.
 * @str: The string to convert.
 * Return: The converted integer.
 */
int _atoi(const char *str) {
    int num = 0;
    while (*str) {
        num = num * 10 + (*str - '0');
        str++;
    }
    return num;
}
int main(int argc, char *argv[]) {
    int sum = 0;

    if (argc == 1) {
        printf("0\n");
        return 0;
    }

    for (int i = 1; i < argc; i++)
    {
        if (check_positive_number(argv[i])) {
            sum += _atoi(argv[i]);
        } else {
            printf("Error\n");
            return 1;
        }
    }

    printf("%d\n", sum);
    return 0;
}
