/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jji <jji@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 20:38:36 by jji               #+#    #+#             */
/*   Updated: 2021/06/22 20:38:36 by jji              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include "../libft/libft.h"

# define ERROR -1
# define SUCCESS 0

# define READ 0
# define WRITE 1

typedef struct  s_exe
{
    char *cmd[5];
    char **argv;
    char **envp;
}               t_exe;

#endif