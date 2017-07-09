#ifndef STEPPER_H_
#define STEPPER_H_

#include <AccelStepper.h>
#include <MultiStepper.h>

namespace stp {
	AccelStepper steppers[3];
	MultiStepper multiStepper;

	void init();
}

#endif /* STEPPER_H_ */
