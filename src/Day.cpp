#include <iostream>
#include <string>
#include <ctime>
#include "../lib/Day.h"

Day::Day(){
	std::time_t now = std::time(nullptr);
    std::tm* localTime = std::localtime(&now);


	const char * daysOfWeek[] = {
		"Sunday","Monday","Tusday","Wednesday","Thursday","Friday","Saturday"
	};

	this->name = daysOfWeek[localTime->tm_wday];
	this->dayNow = localTime->tm_mday;

	int dayOfMonth = localTime->tm_mday;
	int dayOfWeekNumber = localTime->tm_wday;

	std::tm firstDay = {0};

	firstDay.tm_year = localTime->tm_year;
	firstDay.tm_mon = localTime->tm_mon;
	firstDay.tm_mday = 1;

	std::time_t firstDayTime = std::mktime(&firstDay);

	int firstDayWeek = firstDay.tm_wday; 

	int weekNumber = (dayOfMonth + firstDayWeek - 1) / 7 + 1;

	if (weekNumber % 2 == 0){
		this->week = "Парний"; // чёт
	} else {
		this->week = "Непарний"; // не чет
	}
}

Day::~Day(){

}

std::string Day::getName(){
	return name;
}

int Day::getDayNow(){
	return dayNow;
}

std::string Day::even(){
	return week;
}
