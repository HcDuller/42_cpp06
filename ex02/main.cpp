/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:30:27 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/28 15:39:52 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex02.hpp"
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

int main(void){
	Base* ditto;
	for (int i = 0; i < 15; i++){
		ditto = generate();
		std::cout << std::endl;
		identify(ditto);
		identify(*ditto);
		delete ditto;
	}
	return (0);
}