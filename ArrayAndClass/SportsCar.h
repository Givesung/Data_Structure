#include "Car.h"

class sportsCar : public Car
{
public:
	bool bTurbo;
	void setTurbo(bool bTur( {bTurbo = bTur;}
	void speedUp(){
		if(bTurbo) speed += 20;
		else Car::speedUp();
	}
};
