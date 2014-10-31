//===================================================================================================
//		DEBUG.H																						|
//																									|
//		Contient les définitions des fonctions liées au debug (Tests, etc.)							|
//																									|
//		Rédigé par :																				|
//		Jules Pénuchot		L1 MPI - Paris-Sud 11 (Groupe A2, TP4)									|
//===================================================================================================

#ifndef DEF_DEBUG_H
#define DEF_DEBUG_H

#include "main.h"
#include "file_management.h"
#include "image.h"

/*Contient les fonctions et constantes liées au debug.*/
namespace dbg{
	int LaunchTests(int displayTests = 0);
};

#endif