#include "EventMediator.h"

void EventMediator::registerAttackListener(const std::function<void()>& cb) {
    attackListeners.push_back(cb);
}

void EventMediator::triggerAttack() {
    for (auto& cb : attackListeners) {
        cb();
    }
}
