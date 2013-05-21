#include "stdafx.h"
#include "Entity.h"


Entity::Entity()
{
	start();
	m_randNumber = gcnew Random();
	msg = "Created an Entity\n";
	m_sName = m_sError = m_sMsg = m_sProp = m_sType =  String::Empty;
	//log(msg);
}

Entity::~Entity(void)
{
	delete m_sMsg;
}