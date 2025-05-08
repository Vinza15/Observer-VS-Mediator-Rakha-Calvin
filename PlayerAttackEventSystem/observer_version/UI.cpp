#include "UI.h"
#include <iostream>

void UI::onNotify(const EventData& e) {
    if (e.type == "Attack Occurred")
        std::cout << "[UI] Enemy HP Updated\n";
}
