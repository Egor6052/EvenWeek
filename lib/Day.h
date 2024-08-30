#pragma once
#ifndef DAY_H
#define DAY_H

class Day {
private:
	std::string name;
	int dayNow;
	std::string week;
public:
	Day();
	~Day();
	std::string getName();
	int getDayNow();
	std::string even();
};

#endif
