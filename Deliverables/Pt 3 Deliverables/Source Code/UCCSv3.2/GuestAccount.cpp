// File GuestAccount.cpp
// Group 2

#include "GuestAccount.h"

void GuestAccount::menu()
{
}

UCCSchedule GuestAccount::get_schedule(UCCSchedule& obj) const
{
	return UCCSchedule();  // returns schedule object
}

void GuestAccount::find_conference()
{
	//get_schedule(); // Calls get_schedule
}

Conference GuestAccount::get_conference(Conference& obj) const
{
	return Conference();  // Returns conference object
}

void GuestAccount::set_conference_info()
{
	register_guest();
	register_session();
	modify_sessions();
}

void GuestAccount::register_guest()
{
}

void GuestAccount::register_session()
{
}

void GuestAccount::modify_sessions()
{
}

void GuestAccount::pay_invoice()
{
}
