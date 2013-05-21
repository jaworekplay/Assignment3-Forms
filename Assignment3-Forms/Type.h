#pragma once

using namespace System;

ref class CType
{
private:
	array<String^>^ m_asCType; //Character Types;
	array<String^>^ m_asWType; //Weapons Types;
	array<String^>^ m_asMOType;//Magical Object Types;
	array<String^>^ m_asSType; //Spell Types;
	array<String^>^ m_asObjtypes;

	array<String^>^ m_asCharacterNames;
	array<String^>^ m_asWeaponNames;
	array<String^>^ m_asMagicalObjectNames;
	array<String^>^ m_asSpellNames;

	Random^			m_nRand;
public:
	CType(void);
	array<String^>^ getCharacterTypes();
	array<String^>^ getWeaponTypes();
	array<String^>^ getMagicalObjectsTypes();
	array<String^>^ getSpellTypes();
	array<String^>^ getObjectTypes();

	String^ getCharacterName();
	String^ getWeaponName();
	String^ getMagicalObjectName();
	String^ getSpellName();
};

