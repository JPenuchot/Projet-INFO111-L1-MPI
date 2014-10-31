//===================================================================================================
//		IMAGE.H																						|
//																									|
//		Contient les structures de donn�es permettant de traiter des images et des pixels.			|
//																									|
//		R�dig� par :																				|
//		Jules P�nuchot		L1 MPI - Paris-Sud 11 (Groupe A2, TP4)									|
//																									|
//		Bas� sur du code de :																		|
//		Nicolas Thiery		Enseignant � la facult� des Sciences de Paris-Sud						|
//===================================================================================================

#ifndef DEF_IMAGE_H
#define DEF_IMAGE_H

#include "main.h"

/*Namespace regroupant les structures de donn�es et fonctions relatifs au traitement d'image.*/
namespace img{
	/*Structure de donn�es pour repr�senter un pixel*/
	struct Color{
		/*Intensit� du rouge*/
		double r;
		/*Intensit� du vert*/
		double g;
		/*Intensit� du bleu*/
		double b;
	};

	/*Structure de donn�es pour repr�senter une image en couleurs*/
	typedef vector<vector<Color>> Image;

	/*Structure de donn�es pour repr�senter une image en nuances de gris*/
	typedef vector<vector<double>> GreyImage;
}

#endif