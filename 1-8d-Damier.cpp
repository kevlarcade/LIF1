#include <iostream>
using namespace std;
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
            if (j % 2 == 1 && i % 2 == 1){
                cout << "*";
            }
            else if (j % 2 == 0 && i % 2 == 1){
                cout << " ";
            }
            else if (j % 2 == 1 && i % 2 == 0){
                cout << " ";
            }
            else if (j % 2 == 0 && i % 2 == 0){
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}
