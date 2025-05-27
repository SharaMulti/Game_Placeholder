#include <iostream>
#include <string>

using namespace std;

class  Character{
  private:
  string CType;
  int Life;

  public: 

  Character(int option)
  {
    switch(option)
    {
      case 1:
      CType = "chef";
      Life = 6;
      break;
      case 2:
      CType = "maid";
      Life = 10;
      break;
      case 3:
      CType = "guard";
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
  int Intro;

cout << "It is the year 15XX, the king Dragokul has been calling to his castle lots and lots of clerics over for an unkown reason, when asked about it, he denies and turns the question around, you decide to investigate the motive of his actions, but, who are you? \n";
cout << "I am a: Chef (1)" << endl;
cout << "I am a: Maid/Butler (2)" << endl;
cout << "I am a: Guard (3)" << endl;
cout << "Exit game (Exit) ";

cin >> classpick;

Character player(classpick);


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
cin.clear();
cin >> Intro;

switch(Intro)
{
  case 1:
  cout << "The cleric pushes the door open, a 3 meter tall wooden and iron door that has seen and will see more on its life, as you pass through the gates, you are met with a hallway with 2 doors to the sides, and forward, the way to the throne room \n";
  break;
  case 2: //Increases health by 1
  cout << "You stop the cleric dead in ikts tracks by grabbing him by the shoulder, he seems startled, as he turned around with a surprised expression, but quickly shoves you off \n";
  cout << "\n";
  cout << "-May the Gods bless you-\n";
  cout << "\n";
  cout << "With that, he returns to walking towards the gate, he opens it with a sturggle, you follow shortly after him, where he walks towards the throne room\n";
  break;
  case 3:
  cout << "You go back home, turning a entire 180 degrees, you come back to a bustling town filled with people, chatter and commerce is all that youre able to hear for miles even, but soon, that would end, as a man came severely wounded from the woods, claiming he was attacked by the dead, people gatheed around him and murmred all sorts of mannerisms, when suddenly, the main collapsed onto the floor, as people came closer to aid him, he suddenly jumped, and he began attacking the others, and the ones that got attacked, would get up and attack somebdoy else...\n";
  cout << "\n";
  cout << "After that, everything went foggy, your memories would not match with the others, your body felt numb constnatly, and it felt wet, as if raining, all you remember clearly as day, that being, a purple flame...\n";
  return 0;
  break;
  case 4:
  cout << "Without much tought, you skip past the cleric and open the door yourself, as your many runs of the castle quickly send you to the first place of your investigation, the kitched\n";
  cout << "\n";
  cout << "You head right into the door to the right in the hallway, leading to the kitchen, the kitchen is vast and filled with stoves and ovens displayed in 2 single rows, with crates and shelves containing all sorts of dry or hardly perishable foods, you snoop around the shelves all you could, trying to find anything that could maybe be of use, but to no avail, it is a kitchen after all, its just food and how to make foods\n";
  if(player.getCType() == "chef") // Increases health by 1
  {
    cout << "\n";
cout << "You remember however, that there is a really sweet fruit that just arrived from a shipment that the king ordered to try out, it doesn't help in your current situation, but you located hidden at the bottom of a shelf, and you decide to eat one, its sweet and delicious!\n";
break;
  }
  case 5:
cout << "You decide to go straigh to the storage room, something there must have some information, you walk past the cleric and you open the gates, as you turn left and go through the door\n";
cout << "\n";
cout << "You are greeted by a set of barrels and boxes in a big room with just a couple torches hanged in the wall for light, most of theboxes are sealed shut, the ones that aren' have weapons of all kinds sprung upwards ready for quick grabs, you check all you can but to no avail, it's just a storage room\n";
if (player.getCType() == "maid")
{
  cout << "\n";
  cout << "You do however recall there being a very specific barrel containing a rare purple liquid that you told to be dismissed as grape juice, even though its foul smell was far from grapeish, you quickly find the respective barrel, and it seems to have been poured out, as it is missing a part of it's contents, you leave with the now knowing that someone is using this liquid\n";
}
if(player.getCType() == "guard") //heal 1
{
  cout << "\n";
  cout << "As you check the crates of equipment, you are quick to find a sort of weapon polish balm in new state, you wonder for abit, and look around you, after abit, you open the balm and began to polish your gauntlet, making it shine againts the harsh light of the torches againts the wall, probably no o*ne will be using it anyway\n";
}
break;
case 6:
cout << "With a clear goal in mind, you take a deep breath, and walk at a decently fast pace towards the gate, quickly open it with you shoudler, and walk straight into the hallway, where a door to each side are presented, and forward, the throne of the king\n";
}

cout << "You stand infront of  the throne room, and greeted by a red carpet that leads forward, you walk with your nerves showing slightly through your harsh movements, the king has not waken up, so the throne remains empty\n";
cout << "\n";
cout << "The throne room is vast and large all across it, yet it is empty and devoidd of any furtniture, the tall windows loom over from both sides, letting in lots of natural light, which illuminate it in its entirety, the throne is made of solid gold, in a rough, square shaped that almost looks as if it was just a cube or a marble statue, the cushion however looks relatively comfortable, if you can manage to et up the staircase that leads to the throne\n";




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