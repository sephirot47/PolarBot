#ifndef CONFIGURATION_H_
#define CONFIGURATION_H_

namespace cfg {

	//Stepper motors configuration
	namespace stp {
		const int pin[3][4] = {
				{ 0,  1,  2,  3 },
				{ 4,  5,  6,  7 },
				{ 8,  9, 10, 11 }
		};

		const double stepsPerTurn = (25792.0/405.0)*32.0;
		const int stepperSpeed = 20;
	}

}

#endif /* CONFIGURATION_H_ */
