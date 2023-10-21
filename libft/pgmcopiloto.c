#include <stdlib.h>

static int count_words(char const *s, char c)
{
	int count;

	count = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		if (*s == c)
			count++;
		while (*s && *s != c)
			s++;
		}
	return (count);
}

static int word_len(char const *s, char c)
{
	int len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

char **ft_split(char const *s, char c)
{
	char **list;
	int words;
	int i;
	int j;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	list = (char **)malloc(sizeof(char *) * (words + 1));
	if (!list)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s && *s == c)
			s++;
		list[i] = (char *)malloc(sizeof(char) * (word_len(s, c) + 1));
		if (!list[i])
			return (NULL);
		j = 0;
		while (*s && *s != c)
			list[i][j++] = *s++;
		list[i][j] = '\0';
		i++;
	}
	list[i] = NULL;
	return (list);
}


