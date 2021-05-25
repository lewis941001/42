/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jji <jji@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 15:33:16 by jji               #+#    #+#             */
/*   Updated: 2021/05/25 15:52:40 by jji              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/error.h"

void error_function(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "Error", 5);
		exit (0);
	}

	//error 만 출력하면 되니까 이 함수를 우려먹기위한 인자를 어떻게 바꿀지 고민중 사용할 예정
}

int	malloc_error(t_link **add)
{
	*add = malloc(sizeof(t_link));

	if (*add == NULL)
		return (1);
	else
		return (0);
}
