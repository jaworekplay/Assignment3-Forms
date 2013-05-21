#include "StdAfx.h"
#include "IMagicalObject.h"


IMagicalObject::IMagicalObject(String^ name)
{
	m_sName = name;
	m_sType = "Shield";
	m_dStrength = 2.0;
	m_dCost = 1.0;
}
IMagicalObject::IMagicalObject( String^ name,
							   String^ type)
{
	m_sName = name;
	m_sType = type;
	m_dStrength = (Double)m_randNumber->Next(1,10);
	m_dCost = m_randNumber->Next(1,10);
}

String^ IMagicalObject::displayName()
{
	return m_sName;
}
String^ IMagicalObject::displayProperties()
{
	msg = String::Empty;
	msg += "Name: ";
	msg += m_sName;
	msg += "\n";
	msg += "Type: ";
	msg += m_sType;
	msg += "\n";
	msg += "Magical strength: ";
	msg += m_dStrength;
	msg += "\n";
	msg += "Cost: ";
	msg += m_dCost;
	msg += "\n";
	return msg;
}
String^ IMagicalObject::getType()
{
	return m_sType;
}
String^ IMagicalObject::getDamage()
{
	return m_dStrength->ToString();
}

