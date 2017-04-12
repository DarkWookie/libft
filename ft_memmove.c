/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgroscla <rgroscla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 02:30:57 by rgroscla          #+#    #+#             */
/*   Updated: 2017/03/29 20:07:14 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
  char  *buff;
  char  *d;
  char  *s;
  size_t  j;
  size_t  i;

  if (!(buff = (char *)malloc(n)))
    return (dest);
  d = (char *)dest;
  s = (char *)src;
  j = n;
  i = 0;
  while (j--)
    buff[i++] = *s++;
  i = 0;
  while (n--)
    *d++ = buff[i++];
  free(buff);
  return (dest);
}
