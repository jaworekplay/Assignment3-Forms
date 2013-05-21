#include "StdAfx.h"
#include "ISpell.h"


ISpell::ISpell( String^ name,
			   String^ type)
{
	m_sName = name;
	m_dStrength = (double)m_randNumber->Next(1,10);
	m_dCost = (double)m_randNumber->Next(1,5);
	m_sType = type;
}

String^ ISpell::displayName()
{
	return m_sName;
}

String^ ISpell::displayProperties()
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
String^ ISpell::getType()
{
	return m_sType;
}
String^ ISpell::getDamage()
{
	return m_dStrength->ToString();
}