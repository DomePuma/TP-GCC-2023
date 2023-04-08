#ifndef _MYLIB_HPP_
#define _MYLIB_HPP_

#include <iostream>
#include <vector>

#include "Point2D.hpp"

/// @fn randomInt(int min, int max)
/// @brief Renvoie un int random entre 2 valeurs
/// @param min valeur minimumale à renvoyer
/// @param max valeur maximale à renvoyer 
int randomInt(int min, int max);

/// @fn formeCreuse()
/// @brief renvoie une construction de points en carré dont le centre est creux
void formeCreuse();

/// @fn distanceEuclidienne(Point2D p1, Point2D p2)
/// @brief renvoie la distance euclidienne entre 2 points
/// @param p1 point de départ
/// @param p2 point dont on calcule la distance depuis le premier en ligne droite
float distanceEuclidienne(Point2D p1, Point2D p2);

/// @fn distanceManhattan(Point2D p1, Point2D p2)
/// @brief renvoie la distance de Manhattan entre 2 points
/// @param p1 point de départ
/// @param p2 point dont on calcule la distance depuis le premier
float distanceManhattan(Point2D p1, Point2D p2);


void plusProcheVoisin(std::vector<Point2D> points, Point2D P, int dist);

/// @fn plusOuMoins()
/// @brief Jeu de plus ou moins où le joueur doit entrer des valeurs et la machine 
/// @brief lui dit s'il doit donner une valeur plus ou moins haute jusqu'à donner la
/// @brief valeur exacte avec un nombre d'essais limités
void plusOuMoins();

#endif // _MYLIB_HPP_