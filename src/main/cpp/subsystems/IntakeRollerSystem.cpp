/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/IntakeRollerSystem.h"

IntakeRollerSystem::IntakeRollerSystem() : Subsystem("Intake Roller System"), intakeRoller(2)
{
  printf("intake roller Running");
}

void IntakeRollerSystem::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void IntakeRollerSystem::IntakeRoll(float power)
{
	intakeRoller.Set(ControlMode::PercentOutput, power);
}