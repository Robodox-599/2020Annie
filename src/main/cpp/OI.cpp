/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"
#include "frc/buttons/JoystickButton.h"
#include <Commands/IntakeRollThenDown.h>
#include <Commands/IntakeDown.h>
#include <Commands/Fire.h>
#include <Commands/IntakeUp.h>
#include <Commands/FireThenReset.h>
#include <Commands/IntakeDownAndRoll.h>
#include <Commands/CatapultReset.h>
#include <Commands/IntakeRoll.h>

OI::OI() : joy(0) {
  // Process operator interface input here.
	frc::JoystickButton Button1 (&joy, 1);
	frc::JoystickButton Button2 (&joy, 2);
	frc::JoystickButton Button3 (&joy, 3);
	frc::JoystickButton Button4 (&joy, 4);
	frc::JoystickButton Button6 (&joy, 6);
	frc::JoystickButton Button7 (&joy, 7);

	Button1.WhenPressed(new FireThenReset());
	Button2.WhenPressed(new IntakeDownAndRoll());
	Button3.WhenPressed(new IntakeUp());
	Button4.WhenPressed(new IntakeRollThenDown());
	Button6.WhenPressed(new Fire());
}
