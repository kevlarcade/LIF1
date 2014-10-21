#include <iostream>
using namespace std;
/*
 *	Afficher un rectangle d'une taille donnée
 */
int main(void)
{
    int l, h, i, j;
    do{
        cout << "entrer un nombre d'etoile pour la largeur" << endl;
        cin >> l;
        cout << "entrer un nombre d'etoile pour la hauteur" << endl;
        cin >> h;
    }
    while(l < 0 && h <0);
    for(j = 0; j < h; j++){
        for(i = 0; i < l; i++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
