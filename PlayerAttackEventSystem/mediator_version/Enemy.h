#pragma once
#include <string>

class Enemy {
    std::string name;
    int health;
public:
    Enemy(const std::string& n, int h);
    void takeDamage(int amount);
    int getHealth() const;
    const std::string& getName() const;
};
