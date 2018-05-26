#ifndef CSTRING_H
#define CSTRING_H




namespace sict
{
	const int MAX_CHAR = 14;
	
	class CString
	{
		char m_string[MAX_CHAR+1];
		
	public:
		
		CString();
		CString(const char*string);
		~CString();
		void display(std::ostream& os) const;
		
	};
	std::ostream& operator<<(std::ostream& os, const CString& string);
}

#endif