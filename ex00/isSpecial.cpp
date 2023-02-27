/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isSpecial.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:13:13 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/27 20:13:44 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

bool isSpecial(std::string& str){
	std::string special[8] = {"nan","nanf","inf","+inf","-inf","inff","+inff","-inff"};
	for (int i = 0; i < 8; i++){
		if (special[i] == str)
			return (true);
	}
	return (false);
};