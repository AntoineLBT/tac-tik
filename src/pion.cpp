/*
 * pion.cpp
 *
 *  Created on: 26 nov. 2021
 *      Author: lause
 */

#include "../inc/pion.hpp"


Pion::Pion(){
	m_position = 0;
}

	//Retourne la position du pion
int Pion::positionActuel()
{
	return m_position;
};

	//Modifie la position du pion
void Pion::modifierPosition(int newPosition)
{
	Pion::m_position = newPosition;
};

	//Initialise la position du pion en d�but de jeu
void Pion::init(int initPosition)
{
	Pion::m_position = initPosition;
};

	//position lorsque le pion est mange
void Pion::manger(int initPosition)
{
	Pion::init(initPosition);
};
