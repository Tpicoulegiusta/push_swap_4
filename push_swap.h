/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:59:30 by tpicoule          #+#    #+#             */
/*   Updated: 2023/03/21 11:36:00 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <fcntl.h>
# include <errno.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
	struct s_node	*prev;

}	t_node;

typedef struct s_dblist
{
	int				length;
	struct s_node	*top;
	struct s_node	*bot;
}	t_dblist;

t_dblist	*dlist_new(void);
t_dblist	*ft_add_top(t_dblist *list, int value);
t_dblist	*ft_add_bot(t_dblist *list, int value);
void		ft_swap_a(t_node *a, t_node *b);
int			is_space(char c);
int			ft_atoi(char *str);
void		ft_print_pile(t_dblist *list);
t_dblist	*ft_del_bot_list(t_dblist *list);
t_dblist	*ft_del_top_list(t_dblist *list);
void		ft_pa(t_dblist *pilea, t_dblist *pileb);
void		ft_pb(t_dblist *pilea, t_dblist *pileb);
void		ft_ra(t_dblist *pilea);
void		ft_rb(t_dblist *pileb);
void		ft_rra(t_dblist *pilea);
void		ft_rrb(t_dblist *pileb);
t_dblist	*ft_two(t_dblist *pilea);
t_dblist	*ft_tree(t_dblist *pilea);
t_dblist	*ft_five(t_dblist *pilea, t_dblist *pileb);
void		ft_check_five(t_dblist *pilea);

#endif