#pragma once
#include "IObserver.h"

class UI : public IObserver {
public:
    void onNotify(const EventData& e) override;
};
