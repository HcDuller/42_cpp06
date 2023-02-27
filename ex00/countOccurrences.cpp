/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countOccurrences.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:05:37 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/27 20:17:40 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

int countOccurrences(std::string& str, char c){
	int occ = 0;
	size_t pos = 0;
	while (str.find(c, pos) != std::string::npos)
	{
		pos = str.find(c, pos) + 1;
		occ += 1;
	}
	return (occ);
}