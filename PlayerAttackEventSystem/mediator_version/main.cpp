#include "Player.h"
#include "Enemy.h"
#include "UI.h"
#include "SoundSystem.h"
#include "ScoreSystem.h"
#include "EventMediator.h"
#include <functional>
#include <iostream>

int main() {
    EventMediator mediator;
    Player player(mediator);
    Enemy orc("Orc", 20);

    UI ui;
    SoundSystem ss;
    ScoreSystem sc;

    mediator.registerAttackListener([&]() { ui.onAttack(); });
    mediator.registerAttackListener([&]() { ss.onAttack(); });
    mediator.registerAttackListener([&]() { sc.onAttack(orc); });

    while (orc.getHealth() > 0) {
        std::cout << "Tekan 'a' lalu Enter untuk menyerang: ";
        char input;
        std::cin >> input;
        if (input == 'a' || input == 'A') {
            player.attack(orc);
        } else {
            std::cout << "Bukan tombol serang.\n";
        }
    }
    std::cout << "Enemy telah mati!\n";
    return 0;
}