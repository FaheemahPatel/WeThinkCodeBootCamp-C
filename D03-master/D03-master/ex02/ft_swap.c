/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fapatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 12:06:56 by fapatel           #+#    #+#             */
/*   Updated: 2020/07/12 12:59:56 by fapatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_swap(int *a, int *b)
{
	int		f;
	
	f = *a;
	*a = *b;
	*b = f;
}