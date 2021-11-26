/*
 * carte.hpp
 *
 *  Created on: 18 nov. 2020
 *      Author: lause
 *
 *      Le jeu se compose de diff�rents types de cartes ayant des fonctions diff�rentes :
 *      soit avancer
 *      soit permuter
 *      soit les deux
 *
 *
 */

#ifndef CARTE_HPP_
#define CARTE_HPP_

typedef enum{
	UN, 	//avancer ou d�marrer
	DEUX,
	TROIS,
	QUATRE, //-4
	CINQ,
	SIX,
	SEPT, //7X1
	HUIT,
	NEUF,
	DIX,	//avancer ou d�marrer
	DOUZE,
	JOKER,
	PERMUTER
} carte_symbole;

typedef struct{
	int valeurCarte;
	carte_symbole symboleCarte;
}Carte;

#endif /* CARTE_HPP_ */
