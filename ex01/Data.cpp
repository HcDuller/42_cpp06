/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 23:08:42 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/27 23:35:31 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(){};
Data::Data(int x, double y, float z): x(x), y(y), z(z){};
Data::Data(const Data& origin){
	*this = origin;
};
Data& Data::operator=(const Data& origin){
	this->x = origin.x;
	this->y = origin.y;
	this->z = origin.z;
	return *this;
};
Data::~Data(){};
const int& Data::getX() const{
	return (this->x);
};
const double& Data::getY() const{
	return (this->y);
};
const float& Data::getZ() const{
	return (this->z);
};

void Data::setX(int& nX){
	this->x = nX;
}
void Data::setY(double& nY){
	this->y = nY;
}
void Data::setZ(float& nZ){
	this->z = nZ;
}
