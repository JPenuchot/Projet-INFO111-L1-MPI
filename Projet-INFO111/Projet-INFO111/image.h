//===================================================================================================
//		IMAGE.H																						|
//																									|
//		Contient les structures de données permettant de traiter des images et des pixels.			|
//																									|
//		Rédigé par :																				|
//		Jules Pénuchot		L1 MPI - Paris-Sud 11 (Groupe A2, TP4)									|
//																									|
//		Basé sur du code de :																		|
//		Nicolas Thiery		Enseignant à la faculté des Sciences de Paris-Sud						|
//===================================================================================================

#ifndef DEF_IMAGE_H
#define DEF_IMAGE_H

#include "main.h"

/*Namespace regroupant les structures de données et fonctions relatifs au traitement d'image.*/
namespace img{
	/*Structure de données pour représenter un pixel*/
	struct Color{
		/*Intensité du rouge*/
		double r;
		/*Intensité du vert*/
		double g;
		/*Intensité du bleu*/
		double b;
	};

	/*Structure de données pour représenter une image en couleurs*/
	typedef vector<vector<Color>> Image;

	/*Structure de données pour représenter une image en nuances de gris*/
	typedef vector<vector<double>> GreyImage;
}

#endif