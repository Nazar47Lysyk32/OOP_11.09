#include "MobilePhone.h"
#include <iostream>
using namespace std;

MobilePhone::MobilePhone(const string& modelName) : modelName_(modelName) {}

void MobilePhone::turnOn() {
    if (!isOn_) {
        isOn_ = true;
        cout << modelName_ << " is turned on." << endl;
    }
    else {
        cout << modelName_ << " is already on." << endl;
    }
}

void MobilePhone::turnOff() {
    if (isOn_) {
        isOn_ = false;
        cout << modelName_ << " is turned off." << endl;
    }
    else {
        cout << modelName_ << " is already off." << endl;
    }
}

void MobilePhone::useComponent(Component& component) {
    component.doSomething();
}