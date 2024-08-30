#include <iostream>
#include <string>
#include "../lib/Day.h"

int main(){
	Day day;
	std::cout << "Today is " << day.getName() << " day: " << day.getDayNow() << " week: " << day.even() << std::endl;
	return 0;
};
