/**
 * @file file.h
 * @brief fichier d'entete pour la gestion de file
 */
#ifndef __FILE_H__
#define __FILE_H__

#include "eltType.h"

/**
 * @brief taille de la file (au cas ou)
 * @def FILE_SZ
 */
#define FILE_SZ 256

/** TO DO
 * @struct file_t
 * @brief definit la structure de donnees de la file
 */
// TO DO

/**
 * @brief Initialiser une file du type eltType
 *   - allocation de memoire pour une structure file_t et un tableau de taille elements
 * @param [in] taille taille de la file
 * @return l'adresse de la structure file_t
 */
//  initFile();

/** TO DO
 * @brief Verifier si la file est vide (aucun element dans la file)
 * @param [in] ptFile l'adresse de la structure file_t
 * @return 1 - vide, ou 0 - non vide
 */
// estVideFile();

/** TO DO
 * @brief Verifier si la file est pleine
 * @param [in] ptFile l'adresse de la structure file_t
 * @return 1 - pleine, ou 0 - pas pleine
 */
// estPleineFile();

/** TO DO
 * @brief Liberer les memoires occupees par la file
 * @param [in, out] adrPtFile l'adresse du pointeur de la structure file_t
 */
// libererFile();

/** TO DO
 * @brief Entrer un element dans la file
 * @param [in] ptFile le pointeur de tete de la file
 * @param [in] ptVal l'adresse de la valeur a empiler
 * @param [out] code : l'adresse du code de sortie
 *                     *code = 0 si reussi
 *                           = 1 si echec
 */
// entrerFile();

/** TO DO
 * @brief Sortir un element de la file
 * @param [in] ptFile le pointeur de tete d'une file
 * @param [out] ptRes l'adresse de l'element sorti
 * @param [out] code : l'adresse du code de sortie
 *                     *code = 0 si reussi
 *                           = 1 si echec
 * @return la plus ancienne valeur de la file si elle existe
 */
// sortirFile();


#endif