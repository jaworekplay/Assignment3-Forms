#pragma once
#include "entity.h"

enum E_MAGICAL_OBJECT_TYPE
{
	eMO_Wand,
	eMO_Shield,
	eMO_InvisibilityCloak,
	eMO_Transporter
};

//class derived from Entity class
//types of a magical object that can be created
//Wand,
//Shield,
//Invisibility cloak
//Transporter
ref class IMagicalObject :
public Entity
{
private:
	double m_dCost;
public:
	//Default constructor with only name parameter
	IMagicalObject(String^);
	//Secont Constructor with defined every aspect of the object
	IMagicalObject(String^ name,
		String^ type);
	virtual String^ displayName() override;
	virtual String^ displayProperties() override;
	virtual String^ getType() override;
	virtual String^ getDamage() override;
};

