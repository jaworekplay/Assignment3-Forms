#include "StdAfx.h"
#include "IWeapon.h"


IWeapon::IWeapon(String^ name, String^ type)
{
	log("Weapon created");
	m_sName = name;
	m_dCost = (Double)m_randNumber->Next(1,10);
	m_dStrength = (Double)m_randNumber->Next(1,10);
	m_sType = type;
}

String^ IWeapon::displayName()
{
	return m_sName;
}

String^ IWeapon::displayProperties()
{
	msg = String::Empty;
	msg += "Name: ";
	msg += m_sName;
	msg += "\n";
	msg += "Type: ";
	msg += m_sType;
	msg += "\n";
	msg += "Magical Resistance: ";
	msg += m_dStrength;
	msg += "\n";
	msg += "Cost: ";
	msg += m_dCost;
	msg += "\n";
	return msg;
}
String^ IWeapon::getType()
{
	return m_sType;
}

String^ IWeapon::getDamage()
{
	return m_dStrength->ToString();
}