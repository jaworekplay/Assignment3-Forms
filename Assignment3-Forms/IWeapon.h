#pragma once
#include "entity.h"

enum E_WEAPON_TYPE
{
	eWT_Axe = 0,
	eWT_Sword,
	eWT_Dagger,
	eWT_Catapult
};

//class derived from Entity class
//types of Weapons that can be created:
//Axe,
//Sword,
//Dagger,
//Catapult
ref class IWeapon :
public Entity
{
private:
	//variable to hold the cost of the weapon usage
	Double^ m_dCost;
public:
	IWeapon(String^ , String^ );
	virtual String^ displayName() override;
	virtual String^ displayProperties() override;
	virtual String^ getType() override;
	virtual String^ getDamage() override;
};

