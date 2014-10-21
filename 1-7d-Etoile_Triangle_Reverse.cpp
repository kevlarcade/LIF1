#include <iostream>
using namespace std;
/*
 *	Afficher un triangle d'une taille donnée renversée
 */
int main(void)
{
    int l, i, j;
    do{
        cout << "entrer un nombre" << endl;
        cin >> l;
    }
    while(l < 1);
    for (i = l; i >= 1; i--){
        for (j = i; j > 0; j--){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
