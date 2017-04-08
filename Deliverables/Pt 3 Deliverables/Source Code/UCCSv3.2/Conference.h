// File Conference.h
// Group 2

#ifndef CONFERENCE_H
#define CONFERENCE_H
//#include <list>
#include "UCCSchedule.h"
#include "Session.h"
//using std::list;

//!  class Conference
/*!
  This class contains the functions and data members relating to a conference
*/

class Conference
{/**< enum value 1 */
	public:/*!< Presents User with selection GUI */
		UCCSchedule get_schedule(UCCSchedule&) const;  // Fetches schedule of registered conferences */
		Session get_session() const;  /**< gets created a session to be added to the conference		 */
		void set_session_list();  /**< sets the list of sessions that are part of the conference		 */
		void modify_session();  /**< modify session resources											 */
		void remove_session();  /**< removes the session from the conference							 */

	private:
		int time_length_hr;  /**< length of conference, measured in hours					*/
		list<Session> session_list;  /**< List of sessions belonging to the conference	*/
		int current_attendance = 0;  /**< Amount of current attendees						*/
		int MAX_attendance;  /**< The maximum amount of attendees possible				*/
		bool is_full;	/**< If current = max, the conference is sold out					*/

};

#endif //CONFERENCE_H