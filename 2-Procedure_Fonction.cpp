#include <iostream>
#include <time>
using namespace std;

float moyenne (float x, float y)
{
    return ((x + y) / 2);
}

int factorielle (int n)
{
    int fact, i;
    fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int puissance (int n)
{
    int somme, i;
    somme = 0;
    for (i = 1; i <= n; i++)
    {
        somme = somme + i * i;
    }
    return somme;
}

int carre(int n)
{
    if (n % 2 == 0)
    {
        cout << n * n << endl;
    }
}

int main(void)
{
    int choix;
    float nb1, nb2;
    cout << "Quel fonction voulez-vous effectuer ?" << endl << "1 - Moyenne" << endl << "2 - Factorielle" << endl;
    cout << "3 - Somme des n premiers entier au carre" << endl << "4 - Afficher carre si paire" << endl;
    cin >> choix;
    switch ( choix ){
        case 1 :
            cout << "saisir le premier nombre" << endl;
            cin >> nb1;
            cout << "saisir le deuxieme nombre" << endl;
            cin >> nb2;
            cout << "la moyenne de " << nb1 << " et " << nb2 << " est : " << moyenne(nb1, nb2) << endl;
            break ;
        case 2 :
            cout << "saisir un nombre" << endl;
            cin >> nb1;
            cout << nb1 << "! = " << factorielle(nb1) << endl;
            break ;
        case 3 :
            cout << "saisir un nombre" << endl;
            cin >> nb1;
            cout << "la somme des " << nb1 << " premier carre est " << puissance(nb1) << endl;
            break ;
        case 4 :
            nb2 = 0;
            do
            {
                cout << "saisir un nombre" << endl;
                cin >> nb1;
                nb2 = nb2 + 1;
                carre(nb1);
            } while (nb2 < 20);
            break ;
        default :
            cout << "Mauvais choix" << endl;
        break ;
    }
    return 0;
}
