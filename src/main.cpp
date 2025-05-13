#include <iostream>
#include <string>

using namespace std;

int main() {
  int contador = 0; // Variable para contar las veces que se hizo el input
  string input;

  cout << "Ingrese texto (para finalizar, escriba 'fin'):" << endl;

  while (true) {
    getline(cin, input);  // Lee una línea de input
    if (input == "fin") {
      break; // Salir del bucle si el input es "fin"
    }
    contador++; // Incrementar el contador
    if (contador >= 31){
        
      cout << "Your time has ran out. ";
      return 0;
    }
    cout << "Ingreso número " << contador << ": " << input << endl;
  }

  return 0;
}