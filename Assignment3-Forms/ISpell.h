#pragma once
#include "entity.h"
enum E_SPELL_TYPE
{
	eST_Stunning = 0,
	eST_Revealer,
	eST_Object_Summon,
	eST_Weapon_Summon
};

//Class deriver from Entity class
//Types of a Spell that can be created:
//Stunning,
//Revealer,
//Object Summon,
//Weapon Summon
ref class ISpell :
public Entity
{
private:
	double m_dCost;
public:
	//Default Constructor
	ISpell(String^ name,
		String^ type);

	virtual String^ displayName() override;
	virtual String^ displayProperties() override;
	virtual String^ getType() override;
	virtual String^ getDamage() override;
};

