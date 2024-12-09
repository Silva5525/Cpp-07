/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 11:43:55 by wdegraf           #+#    #+#             */
/*   Updated: 2024/12/09 13:16:54 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

/// @brief template function that swaps two values.
/// @tparam T typepe name of the values to swap.
/// @param a first value to swap.
/// @param b to be swapped with a.
/// @note New in C++;
/// @fn template is a keyword that tells the compiler 
/// that the upcoming code is a template for a function.
/// @fn <typename T> tells the compiler that the function
/// is a template function and that the type of the value
/// will be defined later in the code.
template <typename T>
void	swap(T& a, T& b)
{
	T hold = a;
	a = b;
	b = hold;
}

/// @brief tampalte function that returns the minimum value.
/// @tparam T type of the values to compare.
/// @param a first value to compare.
/// @param b second value to be compared with a.
/// @return the minimum value of the two.
template <typename T>
const T&	min(const T& a, const T& b)
{
	return (a < b ? a : b);
}

/// @brief template function that returns the maximum value.
/// @tparam T type of the values to compare.
/// @param a first value to compare.
/// @param b second value to be compared with a.
/// @return the minimum value of the two.
template <typename T>
const T&	max(const T& a, const T& b)
{
	return (a > b ? a : b);
}

#endif
