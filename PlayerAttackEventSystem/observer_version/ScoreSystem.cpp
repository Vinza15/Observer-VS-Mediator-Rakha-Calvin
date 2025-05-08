#include "ScoreSystem.h"
#include <iostream>
#include "Enemy.h"

void ScoreSystem::onNotify(const EventData& e) {
    if (e.type == "Attack Occurred") {
        std::cout << "[ScoreSystem] Score Added if Enemy Dead\n";
    }
}
