/**
 * @file pile.h
 * @brief fichier d'entete pour la gestion de pile
 */
#ifndef __PILE_H__
#define __PILE_H__

#include "eltType.h"

/**
 * @brief taille de la pile (au cas ou)
 * @def PILE_SZ
 */
#define PILE_SZ 256

/** TO DO
 * @struct pile_t
 * @brief definit la structure de donnees de la pile
 */
// TO DO

/** TO DO
 * @brief Initialiser une pile du type pile_t
 *   - allocation de memoire pour une structure pile_t et un tableau de taille elements
 * @param [in] taille taille de la pile
 * @return l'adresse de la structure
 */
//  initPile();

/** TO DO
 * @brief Liberer les memoires occupees par la pile
 * @param [in, out] adrPtPile l'adresse du pointeur de la structure pile_t
 */
// libererPile();

/** TO DO
 * @brief Verifier si la pile est vide (aucun element dans la "base")
 * @param [in] ptPile l'adresse de la structure pile_t
 * @return 1 - vide, ou 0 - non vide
 */
// estVidePile();

/** TO DO
 * @brief Entrer un element dans la pile
 * @param [in, out] ptPile l'adresse de la structure pile_t
 * @param [in] ptVal l'adresse de la valeur a empiler
 * @param [in, out] code : l'adresse du code de sortie
 *                     *code = 0 si reussi
 *                           = 1 si echec
 */
// empiler();

/** TO DO
 * @brief Sortir un element de la pile
 * @param [in, out] ptPile l'adresse de la structure pile_t
 * @param [out] ptRes l'adresse de l'element sorti
 * @param [in, out] code : l'adresse du code de sortie
 *                     *code = 0 si reussi
 *                           = 1 si echec
 */
// depiler();


#endif