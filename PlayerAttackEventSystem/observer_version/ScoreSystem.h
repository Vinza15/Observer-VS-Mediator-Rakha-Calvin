#pragma once
#include "IObserver.h"

class ScoreSystem : public IObserver {
    int score = 0;
public:
    void onNotify(const EventData& e) override;
};
