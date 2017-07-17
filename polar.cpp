#include "polar.h"
#include "stepper.h"
#include "configuration.h"

using namespace cfg::pol;

namespace pol
{
	void setup()
	{
		delay(10000);

		// Let the user position the pen at (0,0)

		stp::init();
		posX = posY = 0;
	}
}
