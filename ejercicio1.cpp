// array

#include <iostream>

using namespace std;

int main(){

    int Numeros[20], numeroBusqueda, todosNumeros;

    for (int i = 0; i < 20; i++)
    {
        cout <<"ingresa tu cantidad numero "<< i + 1 << endl;
        cin>> Numeros[i];
    }

    cout << "que numero dentro de los que ingresaste estas buscando?" << endl;
    cin >> numeroBusqueda;

    if (numeroBusqueda == Numeros[20])
    {
        cout << "su numero si se encuentra entre los que agrego" << endl;
    }else{
        cout << "su numero no se encuentra entre los que agrego" << endl;
    }
    


    return 0;
}