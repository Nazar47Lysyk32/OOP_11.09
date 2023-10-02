#include "MobilePhone.h"

int main() {

    MobilePhone phone("MyPhone");
    Component display("Display");
    Component camera("Camera");
    Component processor("Processor");

    phone.turnOn();
    phone.useComponent(display);
    phone.useComponent(camera);
    phone.useComponent(processor);
    phone.turnOff();

    return 0;
}