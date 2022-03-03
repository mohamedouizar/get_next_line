/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouizar <mouizar@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:54:12 by mouizar           #+#    #+#             */
/*   Updated: 2022/03/03 15:55:51 by mouizar          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	char	str[100];
	int		fd;

	fd = open ("test010.txt", O_RDONLY | O_CREAT);
	printf("%s", get_next_line(fd));
}
