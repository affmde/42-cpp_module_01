/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:10:17 by andrferr          #+#    #+#             */
/*   Updated: 2023/03/13 18:30:16 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(string n)
{
	this->name = n;
	weapon = NULL;
}

HumanB::~HumanB(void)
{

}

void	HumanB::attack(void)
{
	cout << name << " attacks with their " << weapon->getType() << endl;
}

void	HumanB::setWeapon(Weapon &w)
{
	weapon = &w;
}

