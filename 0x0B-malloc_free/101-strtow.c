#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_space(char c) {
    return c == ' ' || c == '\t' || c == '\n';
}

int _count_words(char *str) {
    int _count = 0;
    bool in_word = false;

    while (*str) {
        if (is_space(*str)) {
            in_word = false;
        } else if (!in_word) {
            _count++;
            in_word = true;
        }
        str++;
    }

    return _count;
}

char **strtow(char *str) {
    if (str == NULL || *str == '\0')
        return NULL;

    int words = _count_words(str);
    if (words == 0)
        return NULL;

    char **result = (char **)malloc((words + 1) * sizeof(char *));
    if (result == NULL)
        return NULL;

    int word_len = 0;
    bool in_word = false;
    int i = 0;

    while (*str) {
        if (is_space(*str)) {
            if (in_word) {
                result[i] = (char *)malloc((word_len + 1) * sizeof(char));
                if (result[i] == NULL) {
                    for (int j = 0; j < i; j++) {
                        free(result[j]);
                    }
                    free(result);
                    return NULL;
                }
                word_len = 0;
                i++;
            }
            in_word = false;
        } else {
            result[i][word_len++] = *str;
            in_word = true;
        }
        str++;
    }

    if (in_word) {
        result[i] = (char *)malloc((word_len + 1) * sizeof(char));
        if (result[i] == NULL) {
            for (int j = 0; j < i; j++) {
                free(result[j]);
            }
            free(result);
            return NULL;
        }
        i++;
    }

    result[i] = NULL;

    return result;
}
