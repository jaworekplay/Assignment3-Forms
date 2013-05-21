#pragma once
#include "logger.h"

//Description
//Enumeration to determine which type of an entity we are creating
enum E_TYPE
{
	eTCHARACTER		= 0,
	eTWEAPON,
	eTMAGICAL_OBJECT,
	eTSPELL,
	eTNULL,
	eTCOUNT	
};

//Base class for all our derived classes
//It has some basic functionality which have to be filled in order to make the object valid
ref class Entity:
public Logger
{
protected:
	E_TYPE			m_eType;
	String^			m_sType,
					^ m_sMsg,
					^ m_sProp,
					^ m_sError,
					^ m_sName,
					^ m_sAvatar;
	Double^			m_dStrength;
	//Random number used to determine the values of a generated members
	//very usefull when spawning NPCs
	Random^			m_randNumber;
public:
	Entity(			void);
	~Entity(		void);
	
	//Method used to display all the properties
	virtual String^ displayProperties() abstract;
	//Method to return String with objects name
	virtual String^ displayName() abstract;
	//Method returning String with objects type
	virtual String^ getType() abstract;
	//method returning String with objects Strength/Damage
	virtual String^ getDamage() abstract;
};

