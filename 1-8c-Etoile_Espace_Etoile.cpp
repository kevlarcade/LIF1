#include <iostream>
using namespace std;
/*
 *	Afficher une ligne d'une taille donnée en alternant étoile et espace
 */
int main(void)
{
    int nb, i;
    do{
        cout << "entrer un nombre d'etoile" << endl;
        cin >> nb;
    }
    while(nb < 0);
    for (i = 1; i <= nb; i++){
        if (i % 2 == 1){
        cout << "*";
        }
        else{
        cout << " ";
        }
    }
    cout << endl;
    return 0;
}
