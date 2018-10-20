/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 14:07:32 by aaiche            #+#    #+#             */
/*   Updated: 2018/01/23 18:19:34 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define BUF_SIZE 			32
# define TETRIMINOS_LEN 	20
# define TETRIMINOS_MAX_NUM	19

# include <string.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft.h"

typedef	unsigned int		t_u32;

typedef	struct				s_position
{
	t_u32					x;
	t_u32					y;
}							t_position;

typedef struct				s_tetriminos
{
	char					id;
	t_u32					tetriminos_form;
	t_u32					rank;
	t_u32					is_valid;
	char					*sn;
	t_u32					bitmap;
	t_position				pos[4];
	t_position				h_pos;
}							t_tetri;

typedef struct s_node		t_node;
struct						s_node
{
	t_tetri					*t;
	t_u32					rank;
	t_u32					t_form;
	t_u32					grid_pos;
	t_node					*next;
};

typedef struct				s_grid
{
	t_u32					square;
	t_u32					grid_size;
	t_node					*head_of_all_tetris;
	t_u32					num_tetris;
	t_u32					cur_rank;
	char					*grid_tab;
	t_u32					tetris_pos[TETRIMINOS_MAX_NUM];
}							t_grid;

t_u32						store_tetris_from_file(t_grid *g, char *f, char *b);
t_u32						map_all_tetriminos(t_grid **p_g, t_u32 rank);

t_u32						ft_ceil_sqrt(t_u32 nb);
void						error_msg(char *msg);
void						check_args(char *argv0, int argc);
t_u32						check_num_tetris(t_grid *g);

t_grid						*new_grid(t_u32 square);
void						free_g(t_grid *g);
t_node						*get_tetriminos(t_grid *g, t_u32 rank);
t_grid						*enlarge_grid(t_grid *g);
t_u32						solve(t_grid *g, t_u32 rank);

void						pretty_display_grid(char *grid_tab, int square);
t_u32						traverse_all_stored_tetriminos(t_grid *g);
t_u32						reset_positon_of_tetriminos(t_grid *g, t_node *n);
t_u32						initiliase_grid(char *g, t_u32 x, t_u32 y);
t_u32						check_tetriminos_validity(t_grid *g);
t_u32						store_tetri(t_grid *g, t_tetri *t, t_u32 rank);

t_u32						fill_g_slot(char *x, t_u32 y, t_u32 z, t_tetri *t);
t_u32						add_tetriminos_to_grid(t_grid *g, t_u32 rank);
t_u32						reset_g_slot(char *x, t_u32 y, t_u32 z, t_tetri *t);
t_u32						remove_tetri(t_grid *g, t_u32 rank);

t_tetri						*new_t(char *s, t_u32 rank);
void						free_t(t_tetri *t);
void						set_position(t_position *pos, t_u32 bitmap);
void						set_highest_position(t_position *x, t_position *y);

t_u32						str_to_bitmap(char *s);
t_u32						bitmap_to_str(char **p_out_s, t_u32 bitmap);
t_u32						is_bitmap_valid(t_u32 bitmap);
t_u32						get_tetriminos_form(t_u32 bitmap);

t_u32						set_string(char *s_out, char *s_in);
t_u32						set_bitmap(char *s);
t_u32						get_ordered_bitmap(t_u32 bitmap);
t_u32						is_tetriminos_valid(char **p_s, t_u32 bitmap);

t_node						*create(t_tetri *t, unsigned int rank, t_node *n);
t_node						*append(t_node *head, t_tetri *t, unsigned int x);
t_node						*search(t_node *head, unsigned int rank);
void						traverse(t_node *head, void (*f)(t_node *));
void						dispose(t_node *head);

#endif
