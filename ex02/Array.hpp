/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:51:07 by wdegraf           #+#    #+#             */
/*   Updated: 2024/12/10 11:32:30 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

/// @brief 
/// @tparam T 
/// @note New in C++;
/// @include .tpp  must be after the class definition so the
/// class can be fully processed before the template is implemented.
/// @fn operator[] overload the [] operator to access the array.
template <typename T>
class Array
{
	private:
		T*				arr;
		unsigned int	size;

	public:
		Array();
		Array(unsigned int i);
		Array(const Array& src);
		Array& operator=(const Array& src);
		~Array();

		T& operator[](unsigned int i);
		const T& operator[](unsigned int i) const;

		unsigned int getSize() const;
};

#include "Array.tpp"

#endif
