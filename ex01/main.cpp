/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:15:10 by wdegraf           #+#    #+#             */
/*   Updated: 2025/04/16 15:03:00 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iomanip>

/// @brief Example print function to show how to use iter.
/// @tparam T type of the iterator (can be anything).
/// @param it the iterator to print.
template <typename T>
void	printIt(T& it)
{
	std::cout << it << " ";
}

/// @brief sample function to show how to use iter.
/// @param i integer to convert to float.
void	floatIt(int& i)
{
	std::cout << std::fixed << std::setprecision(1);
	std::cout << static_cast<float>(i) << " ";
}



/// @brief main function to test iter. Prints array of int then convert
/// it to an array of float and print that. Then print an array of strings.
int	main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	std::size_t len = sizeof(arr) / sizeof(arr[0]);
	
	std::cout << "int array: ";
	iter(arr, len, printIt<const int&>);

	std::cout << "\nfloat array: ";
	iter(arr, len, floatIt);

	std::string str[] = {"one", "two", "three", "four", "five"};
	len = sizeof(str) / sizeof(str[0]);
	
	std::cout << "\nprint string array: ";
	iter(str, len, printIt<std::string&>);
	std::cout << std::endl;
	
	return (0);
}