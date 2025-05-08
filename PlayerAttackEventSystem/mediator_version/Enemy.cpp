#include "Enemy.h"
#include <iostream>

Enemy::Enemy(const std::string& n, int h)
    : name(n), health(h) {}

void Enemy::takeDamage(int amount) {
    health -= amount;
    std::cout << "[Enemy] " << name << " HP = " << health << "\n";
}

int Enemy::getHealth() const { return health; }
const std::string& Enemy::getName() const { return name; }
