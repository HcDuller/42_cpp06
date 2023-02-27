/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printAsChar.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:03:04 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/27 20:17:52 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <sstream>
#include "utils.hpp"

void printChar(const char& c){
	if (std::isprint(c))
		std::cout << c << std::endl;
	else
		std::cout << "non-printable character" << std::endl;
};
bool isSpecial(std::string& str);
bool validateStr(std::string& str){ // can be used on strings with len > 1!
	std::string first_c_list = "0123456789+-";
	if (first_c_list.find(str.at(0)) == std::string::npos)
		return (false);
	if (countOccurrences(str, 'f') > 1)
		return (false);
	if (str.find('f') != std::string::npos)
	{
		if (str.find('f') != str.length() - 1)
			return (false);
	}
	if (countOccurrences(str, '.') > 1)
		return (false);
	std::string rest_c_list = "0123456789f";
	for (size_t i = 1; i < str.length(); i++)
	{
		if (rest_c_list.find(str.at(i)) == std::string::npos)
			return (false);
	}
	return (true);
};
void printAsChar(std::string input){
	std::cout << std::left << std::setw(15) << "character:" << std::right << std::setw(10);
	size_t len = input.length();
	char finalChar;
	if (len == 0)
	{
		std::cout << "empty." << std::endl;
		return;
	}
	if (len == 1)
	{
		if (std::isdigit(input.at(0)))
		{
			int charAsInt = static_cast<int>(input.at(0))-48;
			finalChar = static_cast<char>(charAsInt);
		}else{
			finalChar = input.at(0);
		}
		printChar(finalChar);
		return;
	}
	if (isSpecial(input))
	{
		std::cout << "impossible" << std::endl;
		return;
	}
	if (!validateStr(input))
	{
		std::cout << "impossible" << std::endl;
		return;
	}
		std::string strInput = input;
		std::stringstream strStream;
		float contentF;
		int contentI;
		strStream << strInput;
		strStream >> contentF;
		contentI = static_cast<int>(contentF);
		if (contentF == static_cast<float>(contentI))
		{
			if (contentI >= 0 && contentI < 256)
			{
				printChar(static_cast<char>(contentI));
				return;
			}
		}
		std::cout << "impossible" << std::endl;
};