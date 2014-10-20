#include <iostream>
using namespace std;
int main(void)
{
    float note1, note2, note3, moyenne;
    cout << "entrer une premiere note :" << endl;
    cin >> note1;
    cout << "entrer une deuxieme note :" << endl;
    cin >> note2;
    cout << "entrer une troisieme note :" << endl;
    cin >> note3;
    moyenne = (note1+note2+note3)/3;
    cout << "votre moyenne est de :" << moyenne << endl;
    return 0;
}
