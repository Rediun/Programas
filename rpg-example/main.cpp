#include <iostream>
#include "Enemy/Enemy.h"
#include "Player/Player.h"

int main() {
    int contador = 1;

    Player *player = new Player("Victor", 100, 10, 5, 5);
    Enemy *enemy = new Enemy("Recursos Humanos", 50, 5, 2, 3);
    do {
        cout << "\t\t" << "Round" << contador << endl;
        player->doAttack(enemy);
        enemy->doAttack(player);
        contador++;
        cout << "-------------------------------------------------------" << endl;
    } while ((player->getHealth() > 0 && enemy->getHealth() > 0));
    if (player->getHealth() <= 0){
        player->setHealth(0);
        cout << enemy->getName() << " " << "WINS" << endl;
        cout << "\n";
    }
    if (enemy->getHealth() <= 0) {
        enemy->setHealth(0);
        cout << player->getName() << " " << "WINS" << endl;
        player->emote();
        cout << "\n";
    }
    //cout<< player->toString()<< endl;
    //cout<< enemy->toString()<< endl;
    delete player;
    delete enemy;
    return 0;
}
