#include "Component.h"
#include <iostream>
using namespace std;

Component::Component(const string& name) : name_(name) {}

void Component::doSomething() {
    cout << "Component " << name_ << " is doing something." << endl;
}