#pragma once
class AssetsDB
{
public:
	AssetsDB();
	~AssetsDB();

	void addEquip();
	void removeEquip();
	void addRoom();
	void removeRoom();

	void tempaddEquip();
	void tempremoveEquipment();
	void tempaddRoom();
	void tempremoveRoom();
};