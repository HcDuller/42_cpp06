/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:16:48 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/27 20:19:17 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <sstream>
#include <limits>
#include <iostream>
#include <iomanip>

bool isSpecial(std::string& str);
void printAsChar(std::string input);
int countOccurrences(std::string& str, char c);
double strToDouble(std::string str);
