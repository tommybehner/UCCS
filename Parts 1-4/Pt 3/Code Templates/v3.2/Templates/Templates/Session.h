// File Session.h
// Group 2

#ifndef SESSION_H
#define SESSION_H
#include <list>
#include "Database.h"
#include "Room.h"
#include "Equipment.h"
using std::list;

//!  class Session
/*!
 *This class contains the functions and data members relating to a session
*/

class Session
{
	public:	
		void add_equipment();  /**< adds equipment to the session */

	private:
		Room _room;	/**< The room in which the session takes place				  */
		list<Equipment> _equipment; /**< list										  */
		int time_length_min;  /**< length of session, measured in minutes			  */
		int current_attendance = 0;  /**< Amount of current attendees				  */
		int MAX_attendance;  /**< The maximum amount of attendees possible		  */
		bool is_full;	/**< If current = max, the session is sold out			  */
};

#endif //SESSION_H