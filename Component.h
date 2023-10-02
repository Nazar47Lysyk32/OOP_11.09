#pragma once
#include <string>
using namespace std;

class Component {
public:
    Component(const string& name);

    
    void doSomething();

 private:
    string name_;
};
