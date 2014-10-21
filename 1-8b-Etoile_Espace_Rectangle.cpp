#include <iostream>
using namespace std;
/*
 *	Afficher le contour d'un rectangle d'une taille donnée
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
    while (l < 1 && h < 1);
    for (j = 1; j <= h; j++){
        for (i = 1; i <= l; i++){
            if (j == 1 || j == h){
                cout << "*";
            }
            else if (i == 1 || i == l){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
