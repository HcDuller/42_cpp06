/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 23:10:48 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/28 12:06:29 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <stdint.h>
#include <iostream>

Data* deserialize(uintptr_t raw);
uintptr_t serialize(Data* ptr);

int main(void){
	Data valorOriginal(10,15,20);
	
	std::cout <<"Before" << std::endl;

	std::cout << "X : " << valorOriginal.getX() << std::endl;
	std::cout << "Y : " << valorOriginal.getY() << std::endl;
	std::cout << "Z : " << valorOriginal.getZ() << std::endl;

	std::cout << std::endl << std::endl << "After serialization and deserialization: " << std::endl << std::endl;
	
	uintptr_t temp = serialize(&valorOriginal);
	Data* deserializedData = deserialize(temp);

	std::cout << "X : " << deserializedData->getX() << std::endl;
	std::cout << "Y : " << deserializedData->getY() << std::endl;
	std::cout << "Z : " << deserializedData->getZ() << std::endl;
	
	return (0);
}