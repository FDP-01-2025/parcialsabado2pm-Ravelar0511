// punto 1 sin terminar

#include <iostream>

using namespace std;

int main() {
  // variables
  int nombre, carnet, opciones;

  // falta validacion de carne de 8 digitos
  cout << "ingrese su nombre" << endl;
  cin >> nombre;
  cout << "ingrese su numero de carne" << endl;
  cin >> carnet;

  cout << "----Biblioteca----" << endl;
  cout << "Que desea hacer" << endl;
  cout << "1. prestar libro" << endl;
  cout << "2. devolver libro" << endl;
  cout << "3. salir" << endl;
  cin >> opciones;

  switch (opciones) {
    case 1:
      // prestar libro

      int prestamoLibro[5], numeroLibro;

      cout << "tenemos las siguientes opciones" << endl;
      cout << "1.Garry potter" << endl;
      cout << "The begginig after the end" << endl;
      cout << "kimetsu no yaiba" << endl;
      cout << "Naruto shipudden" << endl;
      cout << "mushoku tensei" << endl;

      for (int i = 0; i < 5; i++) {
        cout << "ingresa tu cantidad numero " << i + 1 << endl;
        cin >> prestamoLibro[i];
      }
      cout << "que numero de libro buscando?" << endl;
      cin >> numeroLibro;

      if (numeroLibro == prestamoLibro[0]) {
        cout << "su numero si se encuentra entre los que agrego" << endl;
      } else {
        cout << "su numero no se encuentra entre los que agrego" << endl;
      }
      break;

    default:
      break;
  }

  return 0;
}