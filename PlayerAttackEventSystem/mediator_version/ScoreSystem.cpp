#include "ScoreSystem.h"
#include "Enemy.h"
#include <iostream>

void ScoreSystem::onAttack(Enemy& target) {
    if (target.getHealth() <= 0) {
        target.takeDamage(0); // just to simulate checking
        score += 100;
        std::cout << "[ScoreSystem] Score Added because Enemy Dead\n";
    } else {
        std::cout << "[ScoreSystem] No Score (Enemy masih hidup)\n";
    }
}
