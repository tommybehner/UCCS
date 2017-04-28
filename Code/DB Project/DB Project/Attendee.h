#pragma once
#include <string>
#include "conference.h"

class Attendee
{
public:
	Attendee();
	~Attendee();

	void addAttendee(string, string);
	void removeAttendee(string);

	void registerConference(string, string);
	void unregisterConference(string, string);

	void displayRegistrations(string);
};