#pragma once
#include "IObserver.h"
#include <vector>

class Enemy;  // forward declaration

class Player {
    std::vector<IObserver*> observers;
public:
    void subscribe(IObserver* o);
    void unsubscribe(IObserver* o);
    void attack(Enemy& target);
};
