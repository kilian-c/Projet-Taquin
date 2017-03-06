#include <iostream>
#include <cassert>
#include "tableau2D.h"

using namespace std;

/* ---------- POUR LE DEBUGGAGE ---------- */
bool LOGGING_ON = true;
void log(const char* msg)
{
    if(LOGGING_ON)
    {
        cout << msg << endl;
    }
}
/* ---------------------------------------- */

int main()
{

    Tableau2D taquin;
    int lignes, colonnes;

    cin >> lignes;
    cin >> colonnes;

    assert(lignes > 0 && colonnes > 0);

    log("( Initialiser )");
    initialiser(taquin, lignes, colonnes);

    log("( Lire )");
    lire(taquin);

    log("( Afficher )");
    afficher(taquin);

    log("( Detruire )");
    detruire(taquin);

    return 0;
}
