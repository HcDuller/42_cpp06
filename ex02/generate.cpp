/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:17:50 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/28 14:57:57 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <cmath>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void seedRand(time_t& now){
	srand(now);
}
Base * generate(void){
	static time_t t = 0;
	if (t == 0)
	{
		t = time(NULL);
		seedRand(t);
	}
	int picker = rand() % 3;
	if (picker)
	{
		if (picker == 1)
			return (new B());
		return (new C());
	}
	return (new A());
}