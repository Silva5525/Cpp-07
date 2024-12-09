/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:15:01 by wdegraf           #+#    #+#             */
/*   Updated: 2024/12/09 16:05:34 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>
#include <iostream>

/// @brief iterates over an array and applies a function to each element.
/// @param array of any type.
/// @param len length of the array.
/// @param f function to apply to each element.
template <typename T>
void	iter(T* array, std::size_t len, void (*f)(T&))
{
	for (std::size_t i = 0; i < len; i++)
		f(array[i]);
}

#endif
