/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/IntakeUp.h"
#include "Robot.h"

IntakeUp::IntakeUp() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  Requires(&Robot::intakeSystem);
	Requires(&Robot::intakeRollerSystem);
}

// Called just before this Command runs the first time
void IntakeUp::Initialize() {Robot::intakeSystem.IntakeUp();}

// Called repeatedly when this Command is scheduled to run
void IntakeUp::Execute() {}

// Make this return true when this Command no longer needs to run execute()
bool IntakeUp::IsFinished() { return true; }

// Called once after isFinished returns true
void IntakeUp::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void IntakeUp::Interrupted() {}
