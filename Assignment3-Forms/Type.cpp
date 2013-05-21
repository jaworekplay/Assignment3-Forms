#include "StdAfx.h"
#include "Type.h"


CType::CType(void)
{
	int i = 0;
	m_nRand = gcnew Random();
	//Character types initialisation
	m_asCType = gcnew array<String^>(7);
	m_asCType[i] = "Wizard ";
	++i;
	m_asCType[i] = "Witch ";
	++i;
	m_asCType[i] = "Hero ";
	++i;
	m_asCType[i] = "Heroine ";
	++i;
	m_asCType[i] = "Sponsor ";
	++i;
	m_asCType[i] = "Worker ";
	++i;
	m_asCType[i] = "Creature ";
	i = 0;

	//Wepon types initialisation
	m_asWType = gcnew array<String^>(4);
	m_asWType[i] = "Axe ";
	++i;
	m_asWType[i] = "Sword ";
	++i;
	m_asWType[i] = "Dagger ";
	++i;
	m_asWType[i] = "Catapult ";
	i = 0;

	//Magical Object types initialisation
	m_asMOType = gcnew array<String^>(4);
	m_asMOType[i] = "Wand ";
	++i;
	m_asMOType[i] = "Shield ";
	++i;
	m_asMOType[i] = "Invisibility Cloak ";
	++i;
	m_asMOType[i] = "Transporter ";
	i = 0;

	//Spell types initialisation
	m_asSType = gcnew array<String^>(4);
	m_asSType[i] = "Stunning ";
	++i;
	m_asSType[i] = "Revealer ";
	++i;
	m_asSType[i] = "Object Summoning ";
	++i;
	m_asSType[i] = "Weapon Summoning ";
	i = 0;

	//Object types
	m_asObjtypes = gcnew array<String^>(4);
	m_asObjtypes[i] = "Character";
	++i;
	m_asObjtypes[i] = "Weapon";
	++i;
	m_asObjtypes[i] = "Magical Object";
	++i;
	m_asObjtypes[i] = "Spell";
	i = 0;

	//random names for the characters
	m_asCharacterNames = gcnew array<String^>(4);
	m_asCharacterNames[i] = "Mighty";
	++i;
	m_asCharacterNames[i] = "The Grey";
	++i;
	m_asCharacterNames[i] = "Wise";
	++i;
	m_asCharacterNames[i] = "High";
	i = 0;

	//Names for the weapons
	m_asWeaponNames = gcnew array<String^>(4);
	m_asWeaponNames[i] = "Of Ancient Dragons";
	++i;
	m_asWeaponNames[i] = "Of Blood";
	++i;
	m_asWeaponNames[i] = "Of Infinity";
	++i;
	m_asWeaponNames[i] = "Of Predecessors";
	i = 0;

	//Names for Magical Objects
	m_asMagicalObjectNames = gcnew array<String^>(4);
	m_asMagicalObjectNames[i] = "Enchanted";
	++i;
	m_asMagicalObjectNames[i] = "of Frost";
	++i;
	m_asMagicalObjectNames[i] = String::Empty;
	++i;
	m_asMagicalObjectNames[i] = "Of Fire";
	i = 0;

	//Names for the spells
	m_asSpellNames = gcnew array<String^>(4);
	m_asSpellNames[i] = "Spell";
	++i;
	m_asSpellNames[i] = "Spell";
	++i;
	m_asSpellNames[i] = "Spell";
	++i;
	m_asSpellNames[i] = "Spell";
	i = 0;
}

array<String^>^ CType::getCharacterTypes(){return m_asCType;}
array<String^>^ CType::getWeaponTypes(){return m_asWType;}
array<String^>^ CType::getMagicalObjectsTypes(){return m_asMOType;}
array<String^>^ CType::getSpellTypes(){return m_asSType;}
array<String^>^ CType::getObjectTypes(){return m_asObjtypes;}

String^ CType::getCharacterName(){return m_asCharacterNames[m_nRand->Next(0,3)];}
String^ CType::getWeaponName(){return m_asWeaponNames[m_nRand->Next(0,3)];}
String^ CType::getMagicalObjectName(){return m_asMagicalObjectNames[m_nRand->Next(0,3)];}
String^ CType::getSpellName(){return m_asSpellNames[m_nRand->Next(0,3)];}
