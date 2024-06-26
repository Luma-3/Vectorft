/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magnitude_vector2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrousse <jbrousse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:40:18 by jbrousse          #+#    #+#             */
/*   Updated: 2024/05/06 14:42:27 by jbrousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vectorft.h"

float	magnitude_vector2(t_vector2 v)
{
	return (sqrt(v.x * v.x + v.y * v.y));
}
