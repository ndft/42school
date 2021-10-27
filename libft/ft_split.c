#include "libft.h"

static int	ft_word_count(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i] != '\0')
			{
				i++;
			}
			if (s[i] == '\0')
				return (words);
		}
		i++;
	}
	return (words);
}

static char	**ft_malloc_er(char **a)
{
	int	i;

	i = 0;
	while (a[i])
	{
		free(a[i]);
		i++;
	}
	free(a);
	return (NULL);
}

static int	word_fin(char *s, char c, int i)
{
	int	snap;

	snap = 0;
	while (s && s[i] && snap != 1)
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			snap = 1;
		}
		if (snap != 1)
			i++;
	}
	return (i);
}

static char	*word_pick(char *s, char c, int i, int j)
{
	char	*word;
	long	snap;

	snap = 0;
	while (s && *s && snap != 1)
	{
		if (*s != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			snap = 1;
		}
		if (snap != 1)
			s++;
	}
	if (!(word = malloc(i + 1)))
		return (NULL);
	while (s && *s && *s != c)
	{
		word[j] = *s++;
		j++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**snap;
	long	j;
	long	i;
	long	re;

	if (!s)
		return (NULL);
	j = ft_word_count(s, c);
	i = 0;
	re = 0;
	if (!(snap = malloc(sizeof(char *) * (j + 1))))
		return (NULL);
	snap[j] = NULL;
	while (i < j)
	{
		if (!(snap[i] = word_pick((char *)(s + re), c, 0, 0)))
		{
			ft_malloc_er(snap);
			return (NULL);
		}
		re = word_fin((char *)s, c, re);
		i++;
	}
	return (snap);
}
