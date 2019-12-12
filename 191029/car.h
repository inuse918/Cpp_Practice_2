#pragma once
#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
	int speed;
	int gear;
public:
	int getSpeed();
	void setSpeed(int s);
};
#endif

