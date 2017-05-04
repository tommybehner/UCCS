// File Interface.h
// Group 2

#ifndef INTERFACE_H
#define INTERFACE_H
#include <string>
using std::string;

//!  class Interface 
/*!
 *This class contains the functions and data members relating to a Guest Account
*/

class Interface
{
public:		
	void create_account(); /**< creates account, sets account info				  */
	void login_business_account(string, string);  /**< logs into business account	  */
	void login_guest_account(string, string);  /**< logs into guest account		  */
	void login_database_manager(string, string);  /**< logs into admin account	  */
};

#endif // INTERFACE_H