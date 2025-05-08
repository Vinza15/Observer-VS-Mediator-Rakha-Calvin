#include "Player.h"
#include "Enemy.h"
#include "EventMediator.h"
#include <iostream>

Player::Player(EventMediator& m) : mediator(m) {}

void Player::attack(Enemy& target) {
    std::cout << "[Player] Attacking " << target.getName() << "\n";
    target.takeDamage(10);
    mediator.triggerAttack();
}
