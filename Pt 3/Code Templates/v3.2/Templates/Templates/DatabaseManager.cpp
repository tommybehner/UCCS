// File DatabaseManager.h
// Group 2

#include "DatabaseManager.h"

void DatabaseManager::menu()
{
}

UCCSchedule DatabaseManager::get_schedule() const
{
	return UCCSchedule();  // Returns schedule object
}

void DatabaseManager::find_conference()
{
	get_schedule(); // Calls get_schedule
}

void DatabaseManager::find_session()
{
	get_schedule(); // Calls get_schedule
}

void DatabaseManager::find_resource()
{
}

void DatabaseManager::remove_conference()
{
}

void DatabaseManager::remove_session()
{
}

void DatabaseManager::remove_resource()
{
}

void DatabaseManager::restore_resource()
{
}
