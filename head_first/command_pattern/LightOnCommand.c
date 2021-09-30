#include "Command.h"
#include "LightOnCommand.h"

LightCommand::LightCommand(Light light) {
    this.light = light;
}

void LightOnCommand::execute() {
    light.on();
}
