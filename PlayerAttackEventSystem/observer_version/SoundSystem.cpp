#include "SoundSystem.h"
#include <iostream>

void SoundSystem::onNotify(const EventData& e) {
    if (e.type == "Attack Occurred")
        std::cout << "[SoundSystem] Play Attack Sound\n";
}
