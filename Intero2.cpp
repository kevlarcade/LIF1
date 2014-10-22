#include <iostream>
using namespace std;


int compris_entre(int a, int b)
{
    int nb;
    do{
        cout << "entrer un nombre entre " << a << " et " << b << endl;
        cin >> nb;
    }
    while(nb > b || nb < a );
    return nb;
}

int carre_de_somme(int n)
{
    int somme;
    somme = 0;
    int i;
    for (i = 1; i <= n; i++)
    {
        somme = somme + i;
    }
    return somme * somme;
}

int somme_des_carre(int n)
{
    int somme;
    somme = 0;
    int i;
    for (i = 1; i <= n; i++)
    {
        somme = somme + i * i;
    }
    return somme;
}

int main(void)
{
    int a,b,nb;

    const int MIN = 1;
    const int MAX = 100;

    cout << "entrer un nombre entier :" << endl;
    cin >> a;
    cout << "entrer un nombre entier :" << endl;
    cin >> b;
    cout << "Vous avez saisis le nombre " << compris_entre(a,b) << " qui est compris entre " << a << " et " << b << endl;
    nb = compris_entre(MIN,MAX);
    cout << "le carré de la somme des " << nb << " premiers entier est : " << carre_de_somme(nb) << endl;
    cout << "la somme des carrés des " << nb << " premiers entier est : " << somme_des_carre(nb) << endl;
    return 0;
}

