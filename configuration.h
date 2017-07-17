#ifndef CONFIGURATION_H_
#define CONFIGURATION_H_

namespace cfg
{
	//Stepper motors configuration
	namespace stp
	{
		constexpr int nSteppers = 2;

		const int pin[nSteppers][4] = { { 0, 2, 1, 3 }, { 4, 6, 5, 7 } };

		constexpr double stepsPerTurn = (25792.0 / 405.0) * 64.0;
		constexpr int speed = 500;
	}

	namespace pol
	{
		constexpr int stepperDistance = 400;

		constexpr int logicOrigX = 100;
		constexpr int logicOrigY = 150;
	}
}

#endif /* CONFIGURATION_H_ */
