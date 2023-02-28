/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deserialize.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 23:16:16 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/27 23:42:44 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <stdint.h>
#include <cstddef>

Data* deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}