// File DatabaseManager.h
// Group 2

#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H
#include "UCCSchedule.h"
#include "Database.h"

//!  class DatabaseManager
/*!
 *This class contains the functions and data members relating to Database Manager account
*/

class DatabaseManager
{
public:	
	void menu();  /**< Presents User with selection GUI*/
	UCCSchedule get_schedule() const;	/**< Fetches schedule of registered conferences */
	void find_conference();  /**< Presents user with schedule of registed conferences*/
	void find_session(); /**< Presents user with schedule of registed sessions*/
	void find_resource(); /**< Presents user with resources*/
	void remove_conference();/**< removes a conference from the schedule 			*/
	void remove_session();	 /**< removes a session from the schedule 			*/
	void remove_resource();	 /**< sets a resource to unavailable					*/
	void restore_resource();  /**< adds a resource back into the available pool	*/
};

#endif // DATABASEMANAGER_H
