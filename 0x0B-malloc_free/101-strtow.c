#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_space(char c) {
	return c == ' ' || c == '\t' || c == '\n';
}

int count_words(char *str) {
	int _count = 0;
	int in_word = 0;

	while (*str) {
		if (is_space(*str)) {
			in_word = 0;
		} else if (!in_word) {
			_count++;
			in_word = 1;
		}
		str++;
	}
	return _count;
}

char **strtow(char *str) {
	if (str == NULL || *str == '\0')
		return NULL;

	int words = count_words(str);
	if (words == 0)
		return NULL;

	char **result = (char **)malloc((words + 1) * sizeof(char *));
	if (result == NULL)
		return NULL;

	int word_len = 0;
	int in_word = 0;
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
			in_word = 0;
		} else {
			result[i][word_len++] = *str;
			in_word = 1;
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
