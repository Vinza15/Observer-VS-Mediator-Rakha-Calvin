#pragma once
#include <string>
#include <unordered_map>

struct EventData {
    std::string type;
    std::unordered_map<std::string,int> ints;
};

class IObserver {
public:
    virtual ~IObserver() = default;
    virtual void onNotify(const EventData& e) = 0;
};
