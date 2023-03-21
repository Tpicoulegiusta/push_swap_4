/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:52:17 by tpicoule          #+#    #+#             */
/*   Updated: 2023/03/21 13:07:30 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	signe;

	result = 0;
	i = 0;
	signe = 1;
	while (is_space(str[i]) == 1)
		i++;
	if (str[i] == '-')
	{
		signe *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += (str[i] - 48);
		i++;
	}
	return (result * signe);
}

t_dblist	*ft_del_bot_list(t_dblist *list)
{
	t_node	*tmp;

	if (!list)
		return (NULL);
	if (list->top == list->bot)
	{
		free(list);
		list = NULL;
		return (dlist_new());
	}
	tmp = list->bot;
	list->bot = list->bot->prev;
	list->bot->next = NULL;
	tmp->next = NULL;
	tmp->prev = NULL;
	free(tmp);
	tmp = NULL;
	list->length--;
	return (list);
}

t_dblist	*ft_del_top_list(t_dblist *list)
{
	t_node	*tmp;

	if (!list)
		return (NULL);
	if (list->top == list->bot)
	{
		free(list);
		list = NULL;
		return (dlist_new());
	}
	tmp = list->top;
	list->top = list->top->next;
	list->top->prev = NULL;
	tmp->next = NULL;
	tmp->prev = NULL;
	free(tmp);
	tmp = NULL;
	list->length--;
	return (list);
}
