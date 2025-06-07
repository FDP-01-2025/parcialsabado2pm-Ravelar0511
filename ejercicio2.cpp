// Swich Calculadora

#include <iostream>

using namespace std;

int main() {
  int opcion;
  float numero1, numero2;
  float totalSum, totalRes, totalMult, totalDiv;

  cout << "agregue el numero 1" << endl;
  cin >> numero1;
  cout << "agregre el numero 2" << endl;
  cin >> numero2;

  cout << "------calculadora-------" << endl;
cout << "Que operacion quiere hacer"<< endl;
  cout << "1. Suma" << endl;
  cout << "2. Resta" << endl;
  cout << "3. Multiplicacion" << endl;
  cout << "4. Division" << endl;
  cout << "Que operacion quiere hacer"<< endl;
  cin >> opcion;

  switch (opcion) {
    case 1:  // suma
      totalSum = numero1 + numero2;
      cout << "el total de su suma es: " << totalSum << endl;
      break;
    case 2:  // resta
      totalRes = numero1 - numero2;
      cout << "el total de su suma es: " << totalSum << endl;
      break;
    case 3:  // multiplicacin
      totalMult = numero1 * numero2;
      cout << "el total de su suma es: " << totalSum << endl;
      break;
    case 4:  // division  (no pide que hagamos condicionales de el n1<n2 o n1,n2=0 no se pueda)
      totalDiv = numero1 / numero2;
      cout << "el total de su suma es: " << totalSum << endl;
      break;

    default:
    cout << "No ha elegido ninguna de las opciones"<< endl;
      break;
  }

  return 0;
}