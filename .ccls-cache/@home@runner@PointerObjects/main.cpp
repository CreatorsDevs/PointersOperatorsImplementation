#include <iostream>
using namespace std;

class Player{
private:
  int playerHealth;

public:
  void setPlayerHealth(int p){
    playerHealth = p;
  }

  int getPlayerHealth(){
    return playerHealth;
  }
};

int main() {
  Player *p = new Player();

  p->setPlayerHealth(100);
  p->getPlayerHealth();

  cout << p->getPlayerHealth() << endl;

  delete p;
  
  return 0;
}