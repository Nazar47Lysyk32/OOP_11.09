#pragma once
#include <string>
using namespace std;

class Component {
public:
    Component(const string& name);

    // Приклад функціональності компонента
    void doSomething();

 private:
    string name_;
};