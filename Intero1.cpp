#include <iostream>
using namespace std;

/*
    Suite de syracuse
    Un+1 = Un/2 si pair
    Un+1 = (3Un+1)/2 si impaire

    U0 = 5
    U1 = 8
    U2 = 4
    U3 = 2
    U4 = 1
    U5 = 2
*/

int main(void)
{
    int un, i, nb;

    do
    {
        cout << "entrer un nombre" << endl;
        cin >> nb;
    } while(nb < 0); // Correction nb < 1

    un = 5; // C'est à l'utilisateur de definir Un

    for (i = 1; i <= nb; i++)
    {
        if (un % 2 == 0)
        {
            un = un/2;
        }
        else
        {
            un = (3 * un + 1 ) / 2;
        }
    }

    cout << "D'apres la suite de syracuse le resultat de Un de " << nb << " est : " << un << endl;

    return 0;
}

