/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnemrini <mnemrini@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:42:48 by mnemrini          #+#    #+#             */
/*   Updated: 2025/08/05 18:31:38 by mnemrini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("ft_atoi('     +++123mkmk'): %d\n", ft_atoi('     +++123mkmk'));
	printf("ft_atoi('     ---321owl'): %d\n", ft_atoi('     ---321owl'));
	printf("ft_atoi('     -+-647owl'): %d\n", ft_atoi('     -+-647owl'));

	printf("ft_isalpha('a'): %d\n", ft_isalpha('a'));
	printf("ft_isalpha('$'): %d\n", ft_isalpha('$'));

	printf("ft_isdigit('1'): %d\n", ft_isdigit('1'));
	printf("ft_isdigit('p'): %d\n", ft_isdigit('p'));
	printf("ft_isalnum('a'): %d\n", ft_isalnum('a'));
	printf("ft_isalnum('1'): %d\n", ft_isalnum('1'));
	printf("ft_isalnum('`'): %d\n", ft_isalnum('`'));

	printf("ft_isascii('1'): %d\n", ft_isascii('1'));
	printf("ft_isascii('a'): %d\n", ft_isascii('a'));
	printf("ft_isascii(128): %d\n", ft_isascii(128));

	printf("ft_isprint('1'): %d\n", ft_isprint('1'));
	printf("ft_isprint('a'): %d\n", ft_isprint('a'));
	printf("ft_isprint(128): %d\n", ft_isprint(128));
	printf("ft_isprint(12) : %d\n", ft_isprint(12));

	printf("ft_strlen(\"\"): %d\n", ft_strlen(""));
	printf("ft_strlen(\"MKN\"): %d\n", ft_strlen("MKN"));

	printf("ft_strncmp(\"Hello\",\"Hell no\", 6): %d\n", ft_strncmp("Hello",
			"Hell no", 6));
	printf("ft_strncmp(\"Hello\",\"Hell no\", 4): %d\n", ft_strncmp("Hello",
			"Hell no", 4));

	printf("ft_tolower('1'): %d\n", ft_tolower('a'));
	printf("ft_tolower('a'): %d\n", ft_tolower('a'));
	printf("ft_tolower(128): %d\n", ft_tolower(128));
}