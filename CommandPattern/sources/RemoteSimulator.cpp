#include "RemoteSimulator.hpp"
#include "LightOnCommand.hpp"
#include "LightOffCommand.hpp"
#include "SimpleRemoteControl.hpp"
#include "GarageDoorOpenCommand.hpp"
#include "GarageDoorCloseCommand.hpp"
#include "RemoteControl.hpp"
#include "StereoOnWithCDCommand.hpp"
#include "StereoOffCommand.hpp"
#include "CeilingFanHighCommand.hpp"
#include "CeilingFanMediumCommand.hpp"
#include "CeilingFanLowCommand.hpp"
#include "CeilingFanOffCommand.hpp"
#include "MacroCommand.hpp"

namespace RemoteNamespace
{

void RemoteSimulator::main()
{
    /* Testing SimpleRemoteControl */
    // Light *light = new Light();
    // LightOnCommand *lightOnCommand = new LightOnCommand(light);
    // SimpleRemoteControl *simpleRemoteControl = new SimpleRemoteControl();
    // GarageDoor *garageDoor = new GarageDoor();
    // GarageDoorOpenCommand *garageDoorOpenCommand = new GarageDoorOpenCommand(garageDoor);

    // simpleRemoteControl->setCommand(lightOnCommand);
    // simpleRemoteControl->buttonWasPressed();
    // simpleRemoteControl->setCommand(garageDoorOpenCommand);
    // simpleRemoteControl->buttonWasPressed();

    RemoteControl *remoteControl = new RemoteControl(8);
    /* testing basic functionality with undo included */
    // Stereo *stereo = new Stereo();
    // StereoOnWithCDCommand *stereoOnWithCDCommand = new StereoOnWithCDCommand(stereo);
    // StereoOffCommand *stereoOffCommand = new StereoOffCommand(stereo);
    // remoteControl->setCommand(0, stereoOnWithCDCommand, stereoOffCommand);
    // Light *light = new Light();
    // LightOnCommand *lightOnCommand = new LightOnCommand(light);
    // LightOffCommand *lightOffCommand = new LightOffCommand(light);
    // remoteControl->setCommand(1, lightOnCommand, lightOffCommand);
    // GarageDoor *garageDoor = new GarageDoor();
    // GarageDoorOpenCommand *garageDoorOpenCommand = new GarageDoorOpenCommand(garageDoor);
    // GarageDoorCloseCommand *garageDoorCloseCommand = new GarageDoorCloseCommand(garageDoor);
    // remoteControl->setCommand(2, garageDoorOpenCommand, garageDoorCloseCommand);
    // remoteControl->onButtonWasPushed(0);
    // remoteControl->offButtonWasPushed(0);
    // remoteControl->undoButtonWasPushed();
    // remoteControl->onButtonWasPushed(1);
    // remoteControl->offButtonWasPushed(1);
    // remoteControl->onButtonWasPushed(2);
    // remoteControl->offButtonWasPushed(2);
    // remoteControl->undoButtonWasPushed();
    // remoteControl->undoButtonWasPushed();
    // remoteControl->undoButtonWasPushed();
    // remoteControl->undoButtonWasPushed();
    // remoteControl->undoButtonWasPushed();

    /* ceiling fan test */
    // CeilingFan *ceilingFan = new CeilingFan();
    // CeilingFanOffCommand *ceilingFanOffCommand = new CeilingFanOffCommand(ceilingFan);
    // CeilingFanLowCommand *ceilingFanLowCommand = new CeilingFanLowCommand(ceilingFan);
    // CeilingFanMediumCommand *ceilingFanMediumCommand = new CeilingFanMediumCommand(ceilingFan);
    // CeilingFanHighCommand *ceilingFanHighCommand = new CeilingFanHighCommand(ceilingFan);
    // remoteControl->setCommand(0, ceilingFanLowCommand, ceilingFanOffCommand);
    // remoteControl->setCommand(1, ceilingFanMediumCommand, ceilingFanOffCommand);
    // remoteControl->setCommand(2, ceilingFanHighCommand, ceilingFanOffCommand);
    // remoteControl->onButtonWasPushed(0);
    // remoteControl->onButtonWasPushed(1);
    // remoteControl->onButtonWasPushed(2);
    // remoteControl->undoButtonWasPushed();
    // remoteControl->undoButtonWasPushed();
    // remoteControl->onButtonWasPushed(1);
    // remoteControl->undoButtonWasPushed();
    // remoteControl->onButtonWasPushed(0);
    // remoteControl->undoButtonWasPushed();
    // remoteControl->undoButtonWasPushed();
    // remoteControl->undoButtonWasPushed();

    /* macro command test */
    Stereo *stereo = new Stereo();
    StereoOnWithCDCommand *stereoOnWithCDCommand = new StereoOnWithCDCommand(stereo);
    StereoOffCommand *stereoOffCommand = new StereoOffCommand(stereo);
    Light *light = new Light();
    LightOnCommand *lightOnCommand = new LightOnCommand(light);
    LightOffCommand *lightOffCommand = new LightOffCommand(light);
    GarageDoor *garageDoor = new GarageDoor();
    GarageDoorOpenCommand *garageDoorOpenCommand = new GarageDoorOpenCommand(garageDoor);
    GarageDoorCloseCommand *garageDoorCloseCommand = new GarageDoorCloseCommand(garageDoor);
    MacroCommand *partyMacroOn = new MacroCommand({ stereoOnWithCDCommand, lightOnCommand, garageDoorOpenCommand });
    MacroCommand *partyMacroOff = new MacroCommand({ stereoOffCommand, lightOffCommand, garageDoorCloseCommand });
    remoteControl->setCommand(0, partyMacroOn, partyMacroOff);
    remoteControl->onButtonWasPushed(0);
    remoteControl->offButtonWasPushed(0);
    remoteControl->undoButtonWasPushed();
}

}
