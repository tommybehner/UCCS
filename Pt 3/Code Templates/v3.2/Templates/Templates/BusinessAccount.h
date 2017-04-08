// File BusinessAccount.h
// Group 2

#ifndef BUSINESSACCOUNT_H
#define BUSINESSACCOUNT_H
#include <string>
#include <list>
#include "UCCSchedule.h"
#include "Conference.h"
using std::string;
using std::list;

class BusinessAccount
{
public:
	void menu();  // Presents User with selection GUI
	UCCSchedule get_schedule();  // Fetches schedule of registered conferences 
	void register_conference();	// User can enter desired conference criteria-- dates, time, resources needed
	void modify_conference(); // User can make changes to a conference's settings/resources
	void pay_invoice();  // User can use stored payment info to make payments against their invoice

private:
	struct business_info
	{
		string business_name, owner, payment_info;  // Set during account creation
	}; 
	
	list<Conference> my_conferences;  // list of confences scheduled by business
	double invoice; // Total costs for conference hosting
};

#endif  //BUSINESSACCOUNT_H