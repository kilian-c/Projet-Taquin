#ifndef TAQUIN_H_INCLUDED
#define TAQUIN_H_INCLUDED

struct Taquin {
    Liste lee; // Liste des états explorés
    Liste leae; // Liste des états à explorer
    unsigned int lignes, colonnes; // Nombre de lignes et de colonnes du tableau considéré
};

/**
 * @brief initialiser, crée un jeu de taquin avec l'état initial
 * @param [in-out] t, Taquin à initialiser
*/
void initialiser(Taquin& t);

/**
 * @brief Deplace le # dans le damier, retourne l'état résultant
 * @param [in] mv, Direction dans laquelle doit bouger le #
 * @param [in] e, Etat depuis lequel le mouvement doit être effectué
 * @return er, etat résultant du mouvement
*/
Etat deplacement(Mouvement mv, const Etat& e);

/**
 * @brief jouer, pour faire une itération de l'algorithme de recherche
 * @param [in-out] Taquin t, le taquin à résoudre
*/
void jouer(Taquin& t);

/**
 * @brief Affiche le contenu des listes lee et leae
 * @param [in] Taquin t, le taquin à afficher
*/
void afficher(Taquin& t);

#endif // TAQUIN_H_INCLUDED
