// MultiStepper.cpp
//
// Copyright (C) 2015 Mike McCauley
// $Id: MultiStepper.cpp,v 1.2 2015/10/04 05:16:38 mikem Exp $

#include "MultiStepper.h"
#include "AccelStepper.h"

MultiStepper::MultiStepper() :
		num_steppers(0)
{
}

boolean MultiStepper::addStepper(AccelStepper& stepper)
{
	if (num_steppers >= MULTISTEPPER_MAX_STEPPERS)
		return false; // No room for more
	steppers[num_steppers++] = &stepper;
	return true;
}

void MultiStepper::moveTo(long absolute[])
{
	// First find the stepper that will take the longest time to move
	float longestTime = 0.0;

	uint8_t i;
	for (i = 0; i < num_steppers; i++)
	{
		long thisDistance = absolute[i] - steppers[i]->currentPosition();
		float thisTime = abs(thisDistance) / steppers[i]->maxSpeed();

		if (thisTime > longestTime)
			longestTime = thisTime;
	}

	if (longestTime > 0.0)
	{
		// Now work out a new max speed for each stepper so they will all
		// arrived at the same time of longestTime
		for (i = 0; i < num_steppers; i++)
		{
			long thisDistance = absolute[i] - steppers[i]->currentPosition();
			float thisSpeed = thisDistance / longestTime;
			steppers[i]->moveTo(absolute[i]); // New target position (resets speed)
			steppers[i]->setSpeed(thisSpeed); // New speed
		}
	}
}

// Returns true if any motor is still running to the target position.
boolean MultiStepper::run()
{
	uint8_t i;
	boolean ret = false;
	for (i = 0; i < num_steppers; i++)
	{
		if (steppers[i]->distanceToGo() != 0)
		{
			steppers[i]->runSpeed();
			ret = true;
		}
	}
	return ret;
}

// Blocks until all steppers reach their target position and are stopped
void MultiStepper::runSpeedToPosition()
{
	while (run());
}

