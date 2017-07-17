#include "stepper.h"
#include "configuration.h"

using namespace cfg::stp;

namespace stp
{
	AccelStepper steppers[nSteppers];
	MultiStepper multiStepper;

	void init()
	{
		for (int i = 0; i < nSteppers; ++i)
		{
			steppers[i] = AccelStepper(AccelStepper::HALF4WIRE, pin[i][0],
					pin[i][1], pin[i][2], pin[i][3]);
			steppers[i].setMaxSpeed(speed);
			multiStepper.addStepper(steppers[i]);
		}
	}

	void run()
	{
		multiStepper.run();
	}

	void moveTo(long position[cfg::stp::nSteppers], bool synchronous)
	{
		multiStepper.moveTo(position);
		if (synchronous)
			multiStepper.runSpeedToPosition();
	}

	void stop()
	{
		for (int i = 0; i < nSteppers; ++i)
		{
			AccelStepper s = steppers[i];
			s.stop();
			s.moveTo(s.currentPosition());
		}
	}

	void pause()
	{
		for (int i = 0; i < nSteppers; ++i)
		{
			steppers[i].stop();
		}
	}

	void resume()
	{
		for (int i = 0; i < nSteppers; ++i)
		{
			AccelStepper s = steppers[i];
			s.moveTo(s.targetPosition());
		}
	}

	void enable()
	{
		for (int i = 0; i < nSteppers; ++i)
		{
			steppers[i].enableOutputs();
		}
		resume();
	}

	void disable()
	{
		pause();
		for (int i = 0; i < nSteppers; ++i)
		{
			steppers[i].disableOutputs();
		}
	}

	void currentPosition(long (&position)[nSteppers])
	{
		for (int i = 0; i < nSteppers; ++i)
		{
			position[i] = steppers[i].currentPosition();
		}
	}

	void targetPosition(long (&position)[nSteppers])
	{
		for (int i = 0; i < nSteppers; ++i)
		{
			position[i] = steppers[i].targetPosition();
		}
	}
}
