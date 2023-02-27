/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strToDouble.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:12:38 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/27 20:17:58 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

#define NaN std::numeric_limits<double>::quiet_NaN()
#define P_INF std::numeric_limits<double>::infinity()
#define N_INF P_INF * -1.0

bool isSpecial(std::string& str);
int countOccurrences(std::string& str, char c);

double specialDoubles(std::string& str){
	std::string nan[2] = {"nan","nanf"};
	std::string n_infs[2] = {"-inf","-inff"};
	std::string p_infs[4] = {"inf","+inf","inff","+inff"};
	for(int i = 0; i < 2; i++)
	{
		if (str == nan[i])
			return (NaN);
	}
	for(int i = 0; i < 2; i++)
	{
		if (str == n_infs[i])
			return (N_INF);
	}
	for(int i = 0; i < 4; i++)
	{
		if (str == p_infs[i])
			return (P_INF);
	}
	return (NaN);
}

double strToDouble(std::string str){
	double contentD;
	if (str.length() == 0)
		return (NaN);
	if (isSpecial(str))
	{
		return (specialDoubles(str));
	}
	if (str.length() == 1){
		if (std::isdigit(str.at(0)))
			return (static_cast<double>(static_cast<int>(str.at(0)) - 48));
		else
			return (NaN);
	}
	float sign = 1;
	if (str.at(0) == '-' || str.at(0) == '+')
	{
		if(str.at(0) == '-')
			sign = -1;
		str.erase(0,1);
	}
	if (countOccurrences(str,'.') > 1)
		return (NaN);
	if (countOccurrences(str,'+') > 0)
		return (NaN);
	if (countOccurrences(str,'-') > 0)
		return (NaN);
	if (countOccurrences(str,'f') > 0)
	{
		if (countOccurrences(str,'f') != 1)
			return (NaN);
		if (str.find('f') != str.length() - 1)
			return (NaN);
	}
	std::string validChars = "0123456789.f";
	for (size_t i = 0; i < str.length() ; i++){
		if (validChars.find(str.at(i)) == std::string::npos)
			return (NaN);
	}
	std::string strInput = str;
	std::stringstream strStream;
	strStream << strInput;
	strStream >> contentD;
	return (contentD * sign);
}