/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnemrini <mnemrini@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:36:00 by mnemrini          #+#    #+#             */
/*   Updated: 2025/08/10 22:10:36 by mnemrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	a = 0;
	if (n == 0)
		return (0);
	while (((unsigned char)s1[a] == (unsigned char)s2[a])
		&& (unsigned char)s2[a] && (unsigned char)s1[a] && (a < n - 1))
		a++;
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}

// int main (){
// 	const char *s1 = "Helln";
// 	const char *s2 = "";
// 	size_t n = -2;
// 	printf("%d\n", ft_strncmp(s1,s2,n));
// }