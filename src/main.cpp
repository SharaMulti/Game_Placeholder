#include <iostream>
#include <string>

using namespace std;

class  Character{
  private:
  string CType;
  int LUse;
  int Reputation;
  int Life;

  public: 

  Character(int option)
  {
    switch(option)
    {
      case 1:
      CType = "Chef: ";
      LUse = 10;
      Life = 6;
      break;
      case 2:
      CType = "Maid: ";
      Life = 10;
      break;
      case 3:
      CType = "Guard: ";
      Life = 4;
      
    }
  }
  string getCType()
  {
    return CType;
  }
};

int main() {
  int contador = 0; // Variable para contar las veces que se hizo el input
  string input;
  int classpick;
  char Intro;

cout << "It is the year 15XX, the king Dragokul has been calling to his castle lots and lots of clerics over for an unkown reason, when asked about it, he denies and turns the question around, you decide to investigate the motive of his actions, but, who are you? \n";
cout << "I am a: Chef (1)" << endl;
cout << "I am a: Maid/Butler (2)" << endl;
cout << "I am a: Guard (3)" << endl;
cout << "Exit game (Exit) ";

cin >> classpick;

Character player(classpick);

cout << player.getCType();


switch(classpick)
{
  case 1:
  cout << "You are the royal chef, your young life was spent perfeccioning your skills to always make hearty and good meals for your family of 4, even though your wish was becoming a simple restaurant chef, you got a silver platter opportunity to work for the king as its personal chef after you won a contest ith your star dish: The royal flapjacks, its your first day on the job actually, and youre already out to investigate what occurs at the castle, you grew so fast \n";
  break;
  case 2:
  cout << "You are a common maid/butler of the castle of Dragokul, your job is simple, clean, bring, and hear the demands of all the castle guards and (of course) the king Dragokul, your life was mostly uninteresting, you lived a poorly young life, and have been spending opver 20 years working at the castle, usually you look under the rug to all the evil things Dragokul has done in the past, specially beofre the civil war, but today it was different \n";
  break;
  case 3:
  cout << "You are the royal guard of the king, his right hand, THE man, and the only friend of the king at a point, when you were young, you were a recluse from the normal world, you lived in a rather cozy cave house far out into the forest, as you grew, your parents even let you work at the store with them, until one day, stress had built up in you, and you went into a rampage, killing over 20 residents with no weapon, this put you in life imprisonment, until the king came to visit, and offered you to work for him, you accepted out of need to redeem your own actions, as the years went by, you tolerated the kings misdeeds, but not today, as today you turn your head to the king and confront his actions, or die trying \n";
  break;
  default:
  cout << "Really funny";
};
cout << "\n";
cout << "It is a beautiful day here at the gates of the castle, you come from home to begin working right away and find out why the sudden call of clerics to the castle, you kept staring at the gate trying to steel yourself, until a cleric approaches the gate, passsing by you \n";
cout << "\n";
cout << "-Good morning-\n";
cout << "\n";
cout << "They spoke quietly, as they kept walking, you wonder what you should do: \n";
cout << "\n";
cout << "\n";
cout << "Walk through the front gate (1) \n";
cout << "Stop the cleric (2)\n";
cout << "Go back home (3) \n";
  cout << "Go to the kitchen (4) \n";
  cout << "Go to the storage (5) \n";
  cout << "Go to the throne room (6) \n";

cin >> Intro;

switch(Intro)
{
  case 1:
  cout << "The cleric pushes the door open, a 3 meter tall wooden and iron door that has seen and will see more on its life, as you pass through the gates, you are met with a hallway with 2 doors to the sides, and forward, the way to the throne room \n";
  break;
  case 2:
  cout << "You stop the cleric dead in ikts tracks by grabbing him by the shoulder, he seems startled, as he turned around with a surprised expression, but quickly shoves you off \n";
  cout << "\n";

}




  while (true) {
    getline(cin, input);  // Lee una línea de input
    if (input == "Exit") {
      break; // Salir del bucle si el input es "Exit"
    }
    contador++; // Incrementar el contador
    if (contador >= 31){

      cout << "Your time has ran out. ";
      return 0;
   }
  }
  

  return 0;
}