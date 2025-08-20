/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnemrini <mnemrini@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:36:00 by mnemrini          #+#    #+#             */
/*   Updated: 2025/08/20 19:30:00 by mnemrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	d = (char *)malloc(size + 1);
	if (!d)
		return (NULL);
	ft_strlcpy(d, s, size + 1);
	return (d);
}
int main (){
	char *x = "Hello";
	printf("%s, %s", x, ft_strdup(x));
}