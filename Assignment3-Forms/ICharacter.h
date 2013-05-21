#pragma once
#include "entity.h"

//Future use:
//Enumeration used to update specific chacacter ability
enum E_CHARACTER_ABILITIES
{
	eCAMagicalAbility = 0,
	eCAStrength,
	eCAHealth,
	eCAWealth,
	eCACount
};

//Enumeration for future use
//when dealing with more functionality of a character.
enum E_CHARACTER_STATE
{
	eCSAlive = 0,
	eCSDead,
	eCSBleeding,
	eCSPoisoned,
	eCSHealing,
	eCSRegenerating,
	eCSStunned,
	eCSNormal,
	eCSCount
};

//Enumeration to define what type of a Character we have created, 
//used mainly to determine the magical abilities.
enum E_CHARACTER_TYPE
{
	e_CT_Wizard = 0,
	e_CT_Witch,
	e_CT_Hero,
	e_CT_Heroine,
	e_CT_Sponsor,
	e_CT_Worker,
	e_CT_Creature,
	//count used only for defining how many types of the character are currently in the game
	e_CT_Count,
	e_CT_NULL
};

//Class derived from Entity class plus some additional functionality
//Types of Character:
//Wizard,
//Witch,
//Hero,
//Heroine,
//Sponsor,
//Worker,
//Creature
ref class ICharacter :
public Entity
{
	unsigned short int m_nMagicalAbility,
					   m_nHealth,
					   m_nWealth,
					   m_nNumberOfItems,
					   m_nNumberOfAllies;

	bool			   m_bMale,
					   m_bFemale;
	String^			   m_sType;
	E_CHARACTER_ABILITIES m_eAb;
	E_CHARACTER_STATE	m_eState;
	E_CHARACTER_TYPE	m_eCharacterType;
	array<Entity^>^		m_Inventory;
	array<ICharacter^>^		m_Allies;
public:
	//Default constructor
	//Param1: String^ (name of the character)
	//Param2: String^ (charcter type)
	//Param3: enum (Character type)
	ICharacter(String^,String^, E_CHARACTER_TYPE );
	virtual ~ICharacter(void);
	virtual String^ displayProperties() override;
	virtual String^ displayName() override;
	virtual String^ getType() override;
	virtual String^ getDamage() override;
	virtual bool updateAbilities(E_CHARACTER_ABILITIES, int);
	virtual bool addAlly( ICharacter^ );
	virtual bool deleteAlly();
	bool addItem(Entity^);
	bool deleteItem();
	//test method is to check whether the referencing is working
	bool changeName(String^);
	virtual String^ getAvatar();
	virtual String^ getAllies();
	int getNumberOfAllies();
};

