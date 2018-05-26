
#include <iostream>
#include <cstring>
#include "CString.h"

#define _CRT_SECURE_NO_WARNINGS

using namespace std;



namespace sict
{
	extern int count;
	
	CString::CString()
	{
		m_string[0] = '\0';
	}

	CString::CString(const char* string)
	{
		if (string != nullptr)
		{
			strncpy(m_string, string, MAX_CHAR);
			m_string[MAX_CHAR] = '\0';
		}
		else
			m_string[0] = '\0';
	}

	CString::~CString()
	{

	}

	

	void CString::display(std::ostream& os) const
	{

		os << m_string;
		
	}

	std::ostream& operator<<(std::ostream& os, const CString& string)
	{
		 static int count;

		os << " " << count++ << ": ";
		
		 string.display(os);
		 return os;
	}
}