/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:47:24 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/28 19:50:16 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex02.hpp"
#include <iostream>
#include <exception>

void identify(Base* p){
	std::cout << "Base* p actual type: ";
	if (dynamic_cast<A*>(p))
		std::cout << "A*." << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B*." << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C*." << std::endl;
	else
		std::cout << "Unspecified*." << std::endl;
};
void identify(Base& p){
	bool unidentified = true;
	std::cout << "Base& p actual type: ";
	try{
		(void)dynamic_cast<A&>(p);
		std::cout << "A&." << std::endl;
		unidentified = false;
	}catch(std::exception& e){(void)e;}
	if (unidentified){
		try{
			(void)dynamic_cast<B&>(p);
			std::cout << "B&." << std::endl;
			unidentified = false;
		}catch(std::exception& e){(void)e;}
	}
	if (unidentified){
		try{
			(void)dynamic_cast<C&>(p);
			std::cout << "C&." << std::endl;
			unidentified = false;
		}catch(std::exception& e){
			(void)e;
			std::cout << "Unspecified&." << std::endl;
		}
	}
};