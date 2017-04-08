// File GuestAccount.h
// Group 2

#ifndef GUESTACCOUNT_H
#define GUESTACCOUNT_H
#include <string>
#include <list>
#include "UCCSchedule.h"
#include "Conference.h"
#include "Session.h"
using std::string;
using std::list;

//!  class GuestAccount
/*!
 *This class contains the functions and data members relating to a Guest Account
*/

class GuestAccount
{
public:	
	void menu();  /**< Presents User with selection GUI*/
	UCCSchedule get_schedule() const;  /**< Fetches schedule of registered conferences*/ 
	void find_conference();  /**< Presents user with schedule of registed conferences	*/
	Conference get_conference() const;	/**< Fetches details of conference	*/
	void set_conference_info();  /**< Sets conference attendance						*/
	void register_guest();	/**< User can enter desired conference to attend			*/
	void register_session();  /**< User can enter desired session to attend			*/
	void modify_sessions(); /**< User can make changes to session attendance			*/
	void pay_invoice();  /**< User can use stored payment info to make payments against their invoice*/

private:
	struct guest_info
	{
		string guest_name, payment_info;  /**< Set during account creation*/
	};
	list<Conference> conference_info;  /**< Conference(s) attendance info	   */
	list<Conference> my_sessions;  /**< Sessions attended					   */
	double invoice; /**< Total costs for conference attendance			   */
	bool has_special_priveleges;  /**< if true, can enter special sessions */		 //there needs to be a grant_special_priveleges function somewhere, but i don't know who would grant them
};

#endif // GUESTACCOUNT_H