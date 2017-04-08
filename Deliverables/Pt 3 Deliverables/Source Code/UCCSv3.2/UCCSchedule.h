// File UCCSchedule.h
// Group 2

#ifndef UCCSCHEDULE_H
#define UCCSCHEDULE_H

//!  class UCCSchedule
/*!
This class contains the functions and data members relating to the UCCSchedule class
*/

class UCCSchedule
{
	bool can_be_scheduled(); /**< compares time reservation request against current schedule*/
	void reserve_time();  /**< reserves a time slot for a conference/session				  */
	void restore_time();  /**< restores available time slot at end of conference/session	  */
	// there needs to be a way to measure the length of a conference day
	// what are the business hours?  find a time keeping formula
	// and find a way to mark reserved times!
};

#endif //UCCSCHEDULE_H