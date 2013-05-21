#include "stdafx.h"
#include "Logger.h"

Logger::Logger(void)
{
	m_sFileName = "log.txt";
	sw = gcnew StreamWriter(m_sFileName);
	m_sLog = "Created the Logging service";
	sw->Write(m_sLog);
	sw->Close();
}

Logger::Logger( String^ fileName )
{
	m_sFileName = fileName;
	sw = gcnew StreamWriter(m_sFileName);
	m_sLog = "Created the Logging service\n";
	sw->Write(m_sLog);
	sw->Close();
}


Logger::~Logger(void)
{
	sw->Close();
}

bool Logger::start()
{
	return true;
}

bool Logger::log( String^ msg)
{
	sw = gcnew StreamWriter("log.txt");
	sw->Write(msg);
	msg = String::Empty;
	sw->Close();
	return true;
}
