#pragma once
#include <string>
#include "conference.h"

class Attendee
{
public:
	Attendee();
	~Attendee();

	void addAttendee(string, string);				//!Add an attendee to the DB
	void removeAttendee(string);					//!remove the attendee from the DB

	void registerConference(string, string);		//!Registers the attendee to a conference
	void unregisterConference(string, string);		//!Removes registration

	void displayRegistrations(string);				//!Displays all Registrations for an attendee
};