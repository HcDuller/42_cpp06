/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 23:05:36 by hde-camp          #+#    #+#             */
/*   Updated: 2023/02/27 23:34:58 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Data
{
private:
	int x;
	double y;
	float z;
public:
	const int& getX() const;
	const double& getY() const;
	const float& getZ() const;
	void setX(int& nX);
	void setY(double& nY);
	void setZ(float& nZ);
	Data();
	Data(int x, double y, float z);
	Data(const Data& origin);
	Data& operator=(const Data& origin);
	virtual ~Data();
};
