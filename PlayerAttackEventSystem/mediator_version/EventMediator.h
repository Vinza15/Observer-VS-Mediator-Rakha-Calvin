#pragma once
#include <functional>
#include <vector>

class EventMediator {
    std::vector<std::function<void()>> attackListeners;
public:
    void registerAttackListener(const std::function<void()>& cb);
    void triggerAttack();
};
