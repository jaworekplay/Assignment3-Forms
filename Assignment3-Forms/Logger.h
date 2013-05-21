#pragma once

using namespace System;
using namespace System::IO;

ref class Logger
{
private:
	String^		m_sLog,
				^ m_sFileName;
	StreamWriter^ sw;
public:
	//Description
	//Constructor default one to create file fo logging
	Logger(		void);
	Logger(		String^ );
	//Destructor
	~Logger(	void);
	//Description
	//Log the message in the file with time.
	virtual bool log(String^);
	virtual bool start();
public:
	String^ msg;
};
