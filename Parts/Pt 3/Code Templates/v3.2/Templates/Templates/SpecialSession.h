// File SpecialSession.h
// Group 2

#ifndef SPECIALSESSION_H
#define SPECIALSESSION_H
#include "Session.h"  // base class

//!  class SpecialSession
/*!
 *This class contains the functions and data members relating to the SpecialSession derived class
*/

class SpecialSession : Session
{
	public:
		
	private:
		Room _room;	/**< The room in which the session takes place*/
		list<Equipment> _equipment; /**< list of equipment used in the special session*/
		int time_length_min;  /**< length of special session, measured in minutes*/
		int current_attendance = 0;  /**< Amount of current attendees*/
		int MAX_attendance;  /**< The maximum amount of attendees possible*/
		bool is_full;	/**< If current = max, the special session is sold out*/
		bool is_special = true; /**< denotes just how special this session REALLY is*/
};

#endif //SPECIALSESSION_H