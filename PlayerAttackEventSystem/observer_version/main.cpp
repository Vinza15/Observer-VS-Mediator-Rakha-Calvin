#include "Player.h"
#include "Enemy.h"
#include "UI.h"
#include "SoundSystem.h"
#include "ScoreSystem.h"
#include <iostream>

int main() {
    Player player;
    Enemy goblin("Goblin", 20);

    UI ui;
    SoundSystem ss;
    ScoreSystem sc;

    player.subscribe(&ui);
    player.subscribe(&ss);
    player.subscribe(&sc);

    while (goblin.getHealth() > 0) {
        std::cout << "Tekan 'a' lalu Enter untuk menyerang: ";
        char input;
        std::cin >> input;
        if (input == 'a' || input == 'A') {
            player.attack(goblin);
        } else {
            std::cout << "Bukan tombol serang.\n";
        }
    }
    std::cout << "Enemy telah mati!\n";
    return 0;
}