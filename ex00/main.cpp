/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:09:12 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/27 20:53:13 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <math.h>
#include "utils.hpp"

void printAsInt(double value){
	if (isnan(value) || value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
	{
		std::cout << std::left << std::setw(15) << "int:" << std::right << std::setw(10) << "impossible" << std::endl;
		return;
	}
	int new_value;
	new_value = static_cast<int>(value);
	std::cout << std::left << std::setw(15) << "int:" << std::right << std::setw(10) << std::setprecision(0) << new_value << std::endl;
};
void printAsFloat(double value){
	float new_value;
	new_value = static_cast<float>(value);
	std::cout << std::left << std::setw(15) << "float:" << std::right << std::setw(10) << std::fixed << std::setprecision(1) << std::showpoint << new_value << "f" << std::endl;
};
void printAsDouble(double value){
	std::cout << std::left << std::setw(15) << "double:" << std::right << std::setw(10) << std::fixed << std::setprecision(1) << std::showpoint << value << std::endl;
};

int	main(int argc, char *argv[]){
	if (argc != 2)
	{
		std::cout << "Wrong number of parameters." << std::endl;
		return (1);
	}
	printAsChar(argv[1]);
	double teste = strToDouble(argv[1]);
	printAsInt(teste);
	printAsFloat(teste);
	printAsDouble((teste));
	return (0);
}