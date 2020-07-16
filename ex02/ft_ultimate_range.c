/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caidel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 20:50:13 by caidel            #+#    #+#             */
/*   Updated: 2020/07/16 12:36:51 by caidel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int    ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int s;

    if (min >= max)
    {
        range = NULL;
        return (0);
    }
    s = max - min;
    if (!(**range = (int*)malloc(sizeof(*range)*10)))
        return (-1);
    for (i = 0; i < 10; i++)
      range[i] = (int*)malloc(sizeof(**range)*20);
    i = 0;
    while (i < s)
        *range[i++] = min++;
      return (range);
}
int main() {
  int **range;
  ft_ultimate_range(range, 2, 7);
  return 0;
}
