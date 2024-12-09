/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 11:43:52 by wdegraf           #+#    #+#             */
/*   Updated: 2024/12/09 13:12:28 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

/// @brief subjekt main.
/// @note New in C++;
/// @fn template is a keyword that tells the compiler 
/// that the upcoming code is a template for a function.
/// @fn <typename T> tells the compiler that the function
/// is a template function and that the type of the value
/// will be defined later in the code.
/// @fn :: when you use the scope resolution operator allone,
/// you're telling the compiler to look for the function in the
/// global scope. so he searches ::swap() in the global scope
/// which is defined in my whatever.hpp.
int main( void ) {
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}

// /// @brief main with bit more information.
// int	main(void)
// {
// 	int a  = 2;
// 	int b = 3;

// 	std::cout << "Before swap: a = " << a << ", b = " << b << '\n';
// 	::swap(a, b);
// 	std::cout << "After Swap a = " << a << ", b = " << b << '\n';
// 	std::cout << "min(a, b) = " << ::min(a, b) << '\n';
// 	std::cout << "max(a, b) = " << ::max(a, b) << '\n';

// 	std::string c = "chaine1";
// 	std::string d = "chaine2";

// 	std::cout << "Before swap: c = " << c << ", d = " << d << '\n';
// 	::swap(c, d);
// 	std::cout << "After Swap c = " << c << ", d = " << d << '\n';
// 	std::cout << "min(c, d) = " << ::min(c, d) << '\n';
// 	std::cout << "max(c, d) = " << ::max(c, d) << '\n';

// 	return (0);
// }
