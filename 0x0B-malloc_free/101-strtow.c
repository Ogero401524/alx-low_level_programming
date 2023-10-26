#include <stdlib.h>
#include <stdio.h>

int is_separator(char c)
{
    return c == ' ' || c == '\t' || c == '\n';
}

int _count_words(char *str)
{
    int _count = 0;
    int in_word = 0;

    while (*str)
    {
        if (is_separator(*str))
        {
            in_word = 0;
        }
        else if (!in_word)
        {
            _count++;
            in_word = 1;
        }
        str++;
    }
    return _count;
}

char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return NULL;

    int i, j, k, words;
    char **result;
    int in_word = 0;

    words = _count_words(str);
    if (words == 0)
        return NULL;

    result = (char **)malloc((words + 1) * sizeof(char *));
    if (result == NULL)
        return NULL;

    for (i = 0; i < words; i++)
    {
        while (is_separator(*str))
            str++;

        in_word = 1;
        k = 0;
        while (str[k] && !is_separator(str[k]))
            k++;

        result[i] = (char *)malloc((k + 1) * sizeof(char));
        if (result[i] == NULL)
        {
            for (j = 0; j < i; j++)
                free(result[j]);
            free(result);
            return NULL;
        }

        for (j = 0; j < k; j++)
            result[i][j] = *str++;

        result[i][k] = '\0';
    }

    result[words] = NULL;
    return result;
}

void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; i++)
    {
        printf("%s\n", tab[i]);
    }
}
