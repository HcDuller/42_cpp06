/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:47:24 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/28 15:38:56 by hde-camp         ###   ########.fr       */
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
		dynamic_cast<A&>(p);
		std::cout << "A&." << std::endl;
		unidentified = false;
	}catch(std::exception& e){(void)e;}
	if (unidentified){
		try{
			dynamic_cast<B&>(p);
			std::cout << "B&." << std::endl;
			unidentified = false;
		}catch(std::exception& e){(void)e;}
	}
	if (unidentified){
		try{
			dynamic_cast<C&>(p);
			std::cout << "C&." << std::endl;
			unidentified = false;
		}catch(std::exception& e){
			(void)e;
			std::cout << "Unspecified&." << std::endl;
		}
	}
};