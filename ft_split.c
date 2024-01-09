/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 21:16:36 by sben-tay          #+#    #+#             */
/*   Updated: 2024/01/09 03:10:10 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // pour le main test
#include <stdbool.h> // libc ne contenant que des macros {true, flase} donc autorisé
#include <stdio.h> // pour le main test

// COPY OF MAN OK
char *ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return dest;
}

// TEST OK
size_t	ft_strlen(const char *s)
{
	size_t i = 0;
	while (s[i])
		i++;
	return (i);
}

// TEST OK
char*	ft_substr(const char* s, size_t start, size_t len)
{
	size_t i = start;
	size_t j = 0;
	char *out = malloc(len + 1); 
	while (j < len && s[i])
	{
		out[j] = s[i];
		j++;
		i++;
	}
	out[j] = '\0';
	return (out);
}

// TEST OK
bool ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\f' || c == '\r' || c == '\v');
}

// TEST OK
size_t	word_count(const char *str)
{
	size_t i = 0;
	size_t wc = 0;
	while (str[i])
	{
		while (ft_isspace(str[i]) && str[i])
			i++;
		if (!ft_isspace(str[i]) && str[i])
			wc++;
		while (!ft_isspace(str[i]) && str[i])
			i++;	
	}
	return (wc);
}


char	**ft_split(const char *str) 
{
	size_t n_words = word_count(str);
	size_t split_index = 0;
	size_t i = 0;
	size_t start = 0;
	size_t end = 0;
	
	char **out = malloc(sizeof(char *) * (n_words + 1));	
	while (n_words)
	{
		while (ft_isspace(str[i]))
			i++;
		start = i;
		while (!ft_isspace(str[i]) && str[i])
			i++;
		end = i;
		out[split_index] = ft_substr(str, start, (end - start));
		n_words--; 
		split_index++;
	}
	out[split_index] = NULL;
	return (out);
}


// int main(void)
// {
// 	const char str[]=" 		cadeau    pour    	un    		ami 	 ";
// 	char **result = ft_split(str);
// 	size_t index_split = 0;
	
// 	while (result[index_split])
// 	{
// 		printf("%s\n", result[index_split]);
// 		index_split++;
// 	}
// 	return (0);
// }