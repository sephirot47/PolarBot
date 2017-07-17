#include "includes.h"
#include "stepper.h"

void setup()
{
	stp::init();
}

void loop()
{
	long pos[2] = { (long) cfg::stp::stepsPerTurn, (long) cfg::stp::stepsPerTurn * 2 };
	stp::moveTo(pos,true);
	delay(2000);
	pos[0] = 0L;
	pos[1] = 0L;
	stp::moveTo(pos,true);
	delay(2000);
}
