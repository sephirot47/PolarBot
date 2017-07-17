#ifndef STEPPER_H_
#define STEPPER_H_

#include <AccelStepper.h>
#include <MultiStepper.h>
#include "configuration.h"

namespace stp
{
	void init();
	void run();
	void moveTo(long position[cfg::stp::nSteppers], bool synchronous = false);

	void stop();
	void pause();
	void resumme();

	void enable();
	void disable();

	void currentPosition(long (&position)[cfg::stp::nSteppers]);
	void targetPosition(long (&position)[cfg::stp::nSteppers]);
}

#endif /* STEPPER_H_ */
