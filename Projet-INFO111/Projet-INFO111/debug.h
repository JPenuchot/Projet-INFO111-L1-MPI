//===================================================================================================
//		DEBUG.H																						|
//																									|
//		Contient les d�finitions des fonctions li�es au debug (Tests, etc.)							|
//																									|
//		R�dig� par :																				|
//		Jules P�nuchot		L1 MPI - Paris-Sud 11 (Groupe A2, TP4)									|
//===================================================================================================

#ifndef DEF_DEBUG_H
#define DEF_DEBUG_H

#include "main.h"
#include "file_management.h"
#include "image.h"

/*Contient les fonctions et constantes li�es au debug.*/
namespace dbg{
	int LaunchTests(int displayTests = 0);
};

#endif