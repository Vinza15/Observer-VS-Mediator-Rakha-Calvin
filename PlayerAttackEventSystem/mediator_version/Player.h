#pragma once
class Enemy;
class EventMediator;

class Player {
    EventMediator& mediator;
public:
    Player(EventMediator& m);
    void attack(Enemy& target);
};
