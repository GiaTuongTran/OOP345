#include <iostream>
#include <fstream>

#include "Process.h"
#include "CString.h"

using namespace std;
using namespace sict;


int main(int a, char * b[])

{
	 int count = 10;
	ifstream ifs;



	cout << "Command Line :";



	for (int i = 0; i < a; i++)

	{

		cout << " " << b[i];

	}



	cout << "\n";



	if (a == 1)

	{

		cout << "*** Insufficient number of arguments ***" << endl << "Usage: w1 filename";

		return 1;

	}

	else if (a > 2)

	{

		cout << "*** Too many arguments ***" << endl << "Usage: w1 filename";

		return 1;

	}

	else

	{

		ifs.open(b[a - 1]);



		if (!ifs)

		{

			cerr << "*** Failed to open file " << b[a - 1] << "***" << endl;

			

		}

		else

		{
			
			
				cout << "Reading records from file " << b[a - 1] << endl;

				cout << " No  Record Contents ..." << endl;
				char str[MAX_CHAR + 1];

				ifs.get(str, MAX_CHAR + 1, '\n');

				ifs.ignore(1000, '\n');
				for (int i = 0;i < a + 1;i++)
				{
					process(str);
				}
				
			
		}

	}



	return 0;

}


