#ifndef ETAT_H_INCLUDED
#define ETAT_H_INCLUDED

enum Mouvement { NORD, SUD, EST, OUEST, FIXE };

/**
 * @brief afficher, affiche un mouvement
 * @param [in] mouvement e à afficher
*/
void afficher(Mouvement mv);

struct Etat {
    Tableau2D d; // Damier résultant
    Mouvement m; // Dernier mouvement de #
    unsigned int dp; // Index dans lee du damier précédent
    unsigned int g; // Nombre de coups
    unsigned int h; // Heuristique de e
    unsigned int x, y; // Coordonnées dans le damier résultant
};

/**
 * @brief afficher, affiche un état du Taquin
 * @param [in] état e à afficher
*/
void afficher(const Etat& e);



#endif // ETAT_H_INCLUDED
