#pragma once
#include "IObserver.h"

class SoundSystem : public IObserver {
public:
    void onNotify(const EventData& e) override;
};
