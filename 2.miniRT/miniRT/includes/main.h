#ifndef MAIN_H
# define MAIN_H

#include "get_next_line.h"

#include <fcntl.h> //open
#include <stdlib.h> //malloc, free

typedef struct	s_mlx
{
	void *mlx_ptr;
	void *win_ptr;
	void *img_ptr;
	int	*data;
	int bpp;
	int size_l;
	int endianl;
}				t_mlx;
//기본 mlx형태

typedef struct	s_scene
{
	int x_size;
	int y_size;
	//...etc
}				t_scene;
//장면 구조체

typedef struct s_fig
{
	int				flag;
	union	u_fig 	fig;
	struct	s_fig 	*next;
	//..+a
}				t_fig;
//도형 구조체

union	u_fig
{
	t_sp sp;
	//. pl, sp
}
//union으로서 하나의 도형만 받도록~

# define SP 0

typedef struct	s_sp //sphere
{
	t_p3 c;
	double r;
	int inside;
}				t_sp;

void parse(t_mlx *mlx, t_scene *data, t_fig **lst, char **av)

#endif
