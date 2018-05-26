#include <iostream>
#include "CString.h"
#include "Process.h"

using namespace std;

namespace sict
{
	void process(const char* p) {
		CString cs(p);
		cout << cs << endl;
	}
}
