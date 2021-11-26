/*
 * pioche.hpp
 *
 *  Created on: 26 nov. 2021
 *      Author: lause
 */

#ifndef PIOCHE_HPP_
#define PIOCHE_HPP_

#include <iostream>
#include <list>

#include "../inc/carte.hpp"


class Pioche
{
public :

	Pioche();

	void initPioche();

	void melangeCarte();

	void distribuerCarte(int nb_joueur);

private :
	Carte m_pioche[50] = {};
	int m_indicePioche = 0;
	int restePioche = 50 - m_indicePioche;

};



#endif /* PIOCHE_HPP_ */
