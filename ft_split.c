/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-tay <sben-tay@student.42.paris.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 20:41:54 by sben-tay          #+#    #+#             */
/*   Updated: 2024/01/10 23:44:02 by sben-tay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

static void	*ft_memcpy(void *dest, const void *src, size_t n);
char *ft_substr(const char* s, size_t start, size_t len);
bool ft_isspace(char c);
size_t count_words(char *s);
void	ft_free_secure(char **strs, size_t len);


char **ft_split(char *s)
{
	size_t n_words = count_words(s);
	char **out = malloc(sizeof(char *) * (n_words + 1));
	if (!out)
		return (NULL);
	size_t start;
	size_t end;
	size_t i = 0;
	size_t index_split = 0;
	while (n_words)
	{
		while(ft_isspace(s[i]))
			i++;
		start = i;
		while (!ft_isspace(s[i]))
			i++;
		end = i;
		out[index_split] = ft_substr(s, start, (end - start));
		if (!out[index_split])
		{
			ft_free_secure(out, index_split);
			return (NULL);
		}
		n_words--;
		index_split++;
	}
	out[index_split] = NULL;
	return (out);
}

//	ft_split...				   TESTEUR
//-------------------------------------------------------------------------
int main (void) 
{
	char str[]="JE SUIS UN BON AMI POUR ETUDIER, QUAND JE NE COMPRENDS PAS JE NE FAIS PAS SEMBLANT DE COMPRENDRE ...";
	char **testing = ft_split(str);

	while (*testing)
	{
		printf("%s\n", *testing);
		testing++;
	}
	return (0);
}

// 								HELPERS
// -----------------------------------------------------------------------
size_t	count_words(char *s)
{
	size_t i = 0;
	size_t nb = 0;
	while (s[i])
	{
		while (ft_isspace(s[i]) && s[i])
			i++;
		if (!ft_isspace(s[i]) && s[i])
			nb ++;
		while (!ft_isspace(s[i]) && s[i])
			i++;
	}
	return (nb);
}

char *ft_substr(const char* s, size_t start, size_t len)
{
	char* out = malloc(len + 1);
	out = ft_memcpy(out, s + start, len);
	out[len] = '\0';
	return out;
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *dest__ = (char *)dest;
	char *src__ = (char *)src;
	if (dest__ == NULL || src__ == NULL)
		return (NULL);
	while (n > 0)
	{
		*dest__ = *src__;
		dest__++;
		src__++;
		n--;
	}
	
	return (dest); 
}

bool ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\r' || c == '\n' || c == '\v' || c == '\f');
}

void	ft_free_secure(char **strs, size_t len)
{
	size_t i = 0;
	while (i < len)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}