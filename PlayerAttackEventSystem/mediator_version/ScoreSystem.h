#pragma once
class Enemy;  // forward declaration

class ScoreSystem {
    int score = 0;
public:
    void onAttack(Enemy& target);
};
