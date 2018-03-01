//Author:Christian Orozco
#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  int timeswon;
  int number;
  SecretDoor game;
  cout<<"How many times do you want to play?\n";
  cin>>number;
  for(int i=0;i<number;i++)
 {
  game.newGame();
  game.guessDoorC();
  game.guessDoorC();
  if(game.isWinner() == true)
    timeswon++;
 }
  
  cout<<timeswon<<endl;
  return 0;
}
