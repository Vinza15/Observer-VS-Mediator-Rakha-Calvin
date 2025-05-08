#include "Player.h"
#include "Enemy.h"
#include <algorithm>
#include <iostream>

void Player::subscribe(IObserver* o) {
    observers.push_back(o);
}

void Player::unsubscribe(IObserver* o) {
    observers.erase(std::remove(observers.begin(),observers.end(),o), observers.end());
}

void Player::attack(Enemy& target) {
    std::cout << "[Player] Attacking " << target.getName() << "\n";
    int damage = 10;
    target.takeDamage(damage);

    EventData e{"Attack Occurred", {{"damage", damage}}};
    for (auto* o : observers) {
        o->onNotify(e);
    }
}
