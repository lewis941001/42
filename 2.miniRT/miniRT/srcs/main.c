/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jji <jji@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 15:43:22 by jji               #+#    #+#             */
/*   Updated: 2021/04/21 15:58:01 by jji              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

int main()
{
	int fd;
	char *line;
	t_shape *lst;

	fd = open("text.rt", O_RDONLY);
	while((get_next_line(fd, &line)) > 0)
	{		
		make_shape(&lst, line);
		free(line);
		line = NULL;
	}
	free(line);// need
	return (0);
}
