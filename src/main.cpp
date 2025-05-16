#include <iostream>
#include <string>

using namespace std;

class  Chef{
  private:
  string Chef;
  int Cook = 10;
  int Reputation = 15;
  int Food = 6;

  public: 
  void setChef(string chef)
  {
    Chef = chef;
  }
  void setCook(int cook)
  {
    Cook = cook;
  }
  void setReputation(int reputation)
  {
    Reputation = reputation;
  }
  void setFood (int food)
  {
    Food = food;
  }

  string getChef()
  {
    return Chef;
  }
  int getCook()
  {
    return Cook;
  } 
  int getReputation()
  {
    return Reputation;
  }
  int getFood()
  {
    return Food;
  }
  int HealReputation(int Reputation)
  {

  }
};

class Maid{
    private:
  string Maid;
  string Check;
  int Suspicion = 10;
  int Tools = 10;

  public: 
  void setMaid(string maid)
  {
    Maid = maid;
  }
  void setCheck(string check)
  {
    Check = check;
  }
  void setSuspicion(int suspicion)
  {
    Suspicion = suspicion;
  }
  void setTools (int tools)
  {
    Tools = tools;
  }

  string getMaid()
  {
    return Maid;
  }
  string getCheck()
  {
    return Check;
  } 
  int getSuspicion()
  {
    return Suspicion;
  }
  int getTools()
  {
    return Tools;
  }

};

class Guard{

    private:
  string Guard;
  string Rank;
  int Honor = 20;
  int Protection = 4;

  public: 
  void setGuard(string guard)
  {
    Guard = guard;
  }
  void setRank(int rank)
  {
    Rank = rank;
  }
  void setHonor(int honor)
  {
    Honor = honor;
  }
  void setProtection (int protection)
  {
    Protection = protection;
  }

  string getGuard()
  {
    return Guard;
  }
  string getRank()
  {
    return Rank;
  } 
  int getHonor()
  {
    return Honor;
  }
  int getProtection()
  {
    return Protection;
  }
};

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