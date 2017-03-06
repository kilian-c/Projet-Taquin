#include <iostream>
#include <cassert>

#include "tableau2D.h"
#include "Etat.h"
#include "Liste.h"
#include "Taquin.h"

using namespace std;

/* ---------- POUR LE DEBUGGAGE ---------- */
bool LOGGING_ON = false;
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
    Taquin t;

    log("( Initialiser(Taquin) )");
    initialiser(t);

    log("( Afficher(Taquin) )");
    cout << "Iteration 0" << endl;
    afficher(t);
    cout << "Fin iteration 0" << endl;

    log("( Jouer(Taquin) )");
    jouer(t);

    log("( Afficher(Taquin) )");
    cout << "Iteration 1" << endl;
    afficher(t);
    cout << "Fin iteration 1" << endl;
    return 0;
}
