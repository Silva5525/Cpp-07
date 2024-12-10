/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:29:54 by wdegraf           #+#    #+#             */
/*   Updated: 2024/12/10 11:45:29 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

/// @brief test main for the Array class.
/// @note New in C++;
/// @include .tpp  must be after the class definition so the
/// class can be fully processed before the template is implemented.
/// @fn operator[] overload the [] operator to access the array.
int	main(void)
{
	try
	{
		Array<int> empty;
		std::cout << "Empty Array: " << empty.getSize() << '\n';
		try
		{
			std::cout << "Assigning empty[0] throws = ";
			empty[0] = 1;
		} catch (const std::exception& e) {
			std::cerr << e.what() << std::endl;
		}

		Array<int> arr(4);
		std::cout << "Array with 4 elements: " << arr.getSize() << '\n';
		
		for (unsigned int i = 0; i < arr.getSize(); i++)
			arr[i] = i + 1;
		for (unsigned int i = 0; i < arr.getSize(); i++)
			std::cout << "Array[" << i << "] = " << arr[i] << ' ';
		std::cout << '\n';
		
		try
		{
			std::cout << "Excessing arr[10] throws = " << arr[10] << '\n';
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		Array<int> arrCopy(arr);
		for (unsigned int i = 0; i < arrCopy.getSize(); i++)
		arrCopy[i] = i + 1;
		arrCopy[0] = 42;
		std::cout << "Array: " << arr[0] << '\n';
		std::cout << "Array copy: " << arrCopy[0] << '\n';

		Array<int> arrAssign;
		arrAssign = arr;
		for (unsigned int i = 0; i < arrAssign.getSize(); i++)
		arrAssign[i] = i + 1;
		arrAssign[1] = 420;
		std::cout << "Array: " << arr[1] << '\n';
		std::cout << "Array assign: " << arrAssign[1] << '\n';

		for (unsigned int i = 0; i < arr.getSize(); i++)
		std::cout << "Array[" << i << "] = " << arr[i] << ' ';
		std::cout << '\n';
		
		for (unsigned int i = 0; i < arrCopy.getSize(); i++)
		std::cout << "Copy[" << i << "] = " << arrCopy[i] << ' ';
		std::cout << '\n';
		
		for (unsigned int i = 0; i < arrAssign.getSize(); i++)
		std::cout << "Assign[" << i << "] = " << arrAssign[i] << ' ';
		std::cout << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
	return (0);
}
