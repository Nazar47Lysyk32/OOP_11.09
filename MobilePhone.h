#pragma once
#include <string>
#include "Component.h"
using namespace std;

class MobilePhone {
public:
    MobilePhone(const string& modelName);

    void turnOn();
    void turnOff();

    
    void useComponent(Component& component);

private:
    string modelName_;
    bool isOn_ = false;
};
