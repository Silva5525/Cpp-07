/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:16:22 by wdegraf           #+#    #+#             */
/*   Updated: 2024/12/10 11:34:35 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

/// @brief template constructor
template <typename T>
Array<T>::Array() : arr(nullptr), size(0) {}

/// @brief template constructor with size
/// @param i size of the array
template <typename T>
Array<T>::Array(unsigned int i) : arr(new T[i]), size(i) {}

/// @brief template copy constructor
template <typename T>
Array<T>::Array(const Array& src) : arr(nullptr), size(0)
{
	*this = src;
}

/// @brief assignment operator overload
template <typename T>
Array<T>& Array<T>::operator=(const Array& src)
{
	if (this != &src)
	{
		delete[] arr;
		size = src.size;
		arr = new T[size];
		for (unsigned int i = 0; i < size; i++)
			arr[i] = src.arr[i];
		size = src.size;
	}
	return (*this);
}

/// @brief template destructor
template <typename T>
Array<T>::~Array()
{
	delete[] arr;
}

/// @brief operator[] overload the [] operator to access the array.
/// @param i index of the array
/// @return reference to the element at index i or throw an exception if 
/// the index is out of range
template <typename T>
T& Array<T>::operator[](unsigned int i)
{
	if (i >= size)
		throw std::out_of_range("Index out of range.");
	return (arr[i]);
}

/// @brief operator[] overload the [] operator to access the array
/// for const objects.
/// @param i index of the array
/// @return reference to the element at index i or throw an exception if
/// the index is out of range
template <typename T>
const T& Array<T>::operator[](unsigned int i) const
{
	if (i >= size)
		throw std::out_of_range("Index out of range.");
	return (arr[i]);
}

/// @brief template member function to get the size of the array
/// @return size of the array
template <typename T>
unsigned int Array<T>::getSize() const
{
	return (size);
}
