#include "stdafx.h"
#include "ICharacter.h"


ICharacter::ICharacter(String^ name, String^ type, E_CHARACTER_TYPE eType)
{
	//log("Creating a Character");
	m_sName = name;
	m_nHealth = 10;//Health is always going to be max value when creating any type of character
	m_sType = type;
	m_eCharacterType = eType;
	m_Inventory = gcnew array<Entity^>(4);
	m_Allies = gcnew array<ICharacter^>(4);
	m_nNumberOfItems = m_nNumberOfAllies = 0;
	switch(m_eCharacterType)
	{
	case E_CHARACTER_TYPE::e_CT_Wizard:
		m_nMagicalAbility = m_randNumber->Next(5,10);
		m_dStrength = (double)m_randNumber->Next(1,3);
		m_nWealth = m_randNumber->Next(1,5);
		m_bMale = true;
		m_bFemale = !m_bMale;
		m_sAvatar = L"..\\pictures\\wizard.png";
		m_eCharacterType = eType;
		break;
	case E_CHARACTER_TYPE::e_CT_Witch:
		m_nMagicalAbility = m_randNumber->Next(5,10);
		m_dStrength = (double)m_randNumber->Next(1,3);
		m_nWealth = m_randNumber->Next(1,5);
		m_bMale = false;
		m_bFemale = !m_bMale;
		m_sAvatar = L"..\\pictures\\witch.bmp";
		m_eCharacterType = eType;
		break;
	case E_CHARACTER_TYPE::e_CT_Creature:
		m_nMagicalAbility = m_randNumber->Next(5,10);
		m_dStrength = (double)m_randNumber->Next(3,6);//Because Creature is stronger than wizard this is different from the wizard one
		m_nWealth = m_randNumber->Next(1,5);
		m_bMale = false;
		m_bFemale = false;
		m_sAvatar = L"..\\pictures\\creature.jpg";
		m_eCharacterType = eType;
		break;
	case E_CHARACTER_TYPE::e_CT_Hero:
		m_nMagicalAbility = m_randNumber->Next(2,4);
		m_dStrength = (double)m_randNumber->Next(7,10);
		m_nWealth = m_randNumber->Next(1,5);
		m_bMale = true;
		m_bFemale = !m_bMale;
		m_sAvatar = L"..\\pictures\\hero.bmp";
		m_eCharacterType = eType;
		break;
	case E_CHARACTER_TYPE::e_CT_Heroine:
		m_nMagicalAbility = m_randNumber->Next(2,4);
		m_dStrength = (double)m_randNumber->Next(7,10);
		m_nWealth = m_randNumber->Next(1,5);
		m_bMale = false;
		m_bFemale = !m_bMale;
		m_sAvatar = L"..\\pictures\\heroine.jpg";
		m_eCharacterType = eType;
		break;
	case E_CHARACTER_TYPE::e_CT_Sponsor:
		m_nMagicalAbility = 0;
		m_dStrength = (double)m_randNumber->Next(1,2);
		m_nWealth = m_randNumber->Next(6,10);
		m_bMale = false;
		m_bFemale = !m_bMale;
		m_sAvatar = L"..\\pictures\\sponsor.jpg";
		m_eCharacterType = eType;
		break;
	case E_CHARACTER_TYPE::e_CT_Worker:
		m_nMagicalAbility = 0;
		m_dStrength = (double)m_randNumber->Next(1,2);
		m_nWealth = 0;
		m_bMale = m_randNumber->Next(0,1);
		m_bFemale = !m_bMale;
		m_sAvatar = L"..\\pictures\\worker.bmp";
		m_eCharacterType = eType;
		break;
	}
}
String^ ICharacter::displayProperties()
{
	msg = "\nName: ";
	msg += m_sName;
	msg += "\nType: ";
	msg += m_sType;
	msg += "\nMagical Ability: ";
	msg += m_nMagicalAbility.ToString();
	msg += "\nHealth: ";
	msg += m_nHealth.ToString();
	msg += "\nWealth: ";
	msg += m_nWealth.ToString();
	if (this->m_eCharacterType != e_CT_Creature || this->m_eCharacterType != e_CT_Sponsor)
	{
		msg += "\nSex: ";
		if( m_bMale )
			msg += "Male";
		else
			msg += "Female";
	}
	msg += "\nStrength: ";
	msg += m_dStrength->ToString();
	msg += "\nInventory: ";
	if (m_nNumberOfItems > 0)
		msg += m_Inventory[m_nNumberOfItems - 1]->displayName();
	return msg;
}
String^ ICharacter::displayName()
{
	return m_sName;
}

bool ICharacter::updateAbilities( E_CHARACTER_ABILITIES ability, int amount )
{
	return true;
}

bool ICharacter::addAlly(ICharacter^ ally)
{
	if(ally)
	{
		m_Allies[m_nNumberOfAllies] = ally;
		++m_nNumberOfAllies;
		return true;
	}
	else
		return false;
}
ICharacter::~ICharacter(){}

String^ ICharacter::getType()
{
	return m_sType;
}

String^ ICharacter::getDamage()
{
	return m_dStrength->ToString();
}

bool ICharacter::changeName(String^ otherName)
{
	if( otherName != String::Empty)
	{
		m_sName = otherName;
		return true;
	}
	else return false;
}

String^ ICharacter::getAvatar()
{
	return m_sAvatar;
}

String^ ICharacter::getAllies()
{
	msg = String::Empty;
	msg += "\nAllies: ";
	for (int i = 0; i < this->m_nNumberOfAllies; i++)
	{
		msg += "\n";
		msg += m_Allies[i]->displayName();
	}
	return msg;
}

int ICharacter::getNumberOfAllies(){return m_nNumberOfAllies;}

bool ICharacter::deleteAlly()
{
	delete m_Allies[m_nNumberOfAllies];
	if(m_nNumberOfAllies > 0 )
	{
		--m_nNumberOfAllies;
		return true;
	}
	else
	{
		return false;
	}
}

bool ICharacter::addItem(Entity^ item)
{
	m_Inventory[m_nNumberOfItems] = item;
	if (m_nNumberOfItems < 4)
	{
		++m_nNumberOfItems;
		return true;
	}
	else
	{
		return false;
	}
}

bool ICharacter::deleteItem()
{
	delete m_Inventory[m_nNumberOfItems];
	if (m_nNumberOfItems > 0)
	{
		--m_nNumberOfItems;
		return true;
	}
	else
	{
		return false;
	}
}