/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshanmug <vshanmug@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 14:40:55 by vshanmug          #+#    #+#             */
/*   Updated: 2026/04/18 14:40:55 by vshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_words(char const *s, char c)
{
	int	num_words;
	int	i;

	num_words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
		{
			i++;
		}
		if (s[i] == '\0')
			break ;
		num_words += 1;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (num_words);
}

static int	ft_word_len(char const *curr_spot, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (curr_spot[i] != '\0' && curr_spot[i] == c)
	{
		i++;
	}
	while (curr_spot[i] != '\0' && curr_spot[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static char	*get_next_word(char const *s, int *s_idx, char c)
{
	int		word_len;
	char	*word;
	int		i;

	word_len = ft_word_len(&s[*s_idx], c);
	word = malloc(sizeof(char) * (word_len + 1));
	i = 0;
	if (!word)
		return (NULL);
	while (s[*s_idx] == c)
		*s_idx = *s_idx + 1;
	while (s[*s_idx] != '\0' && i < word_len)
	{
		word[i] = s[*s_idx];
		*s_idx = *s_idx + 1;
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		num_words;
	char	**sentence;
	int		i;
	int		j;

	num_words = get_num_words(s, c);
	sentence = malloc(sizeof(char *) * (num_words + 1));
	if (!sentence)
		return (NULL);
	sentence[num_words] = NULL;
	i = 0;
	j = 0;
	while (i < num_words)
	{
		sentence[i] = get_next_word(s, &j, c);
		if (!sentence[i])
		{
			return (NULL);
		}
		i++;
	}
	return (sentence);
}

//Step 1 get the number of words in the string 
//and allocate memory for the sentence
//Step 2 get the length of the word and allocate memory for the word
//Step 3 get the next word and fill the sentence with the words
//ft_split splits the string s using the character c 
//as a delimiter and returns an array of strings
//the array must end with a NULL pointer
//delimiter is the character used to split the string into words