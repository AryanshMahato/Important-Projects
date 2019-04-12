#include "pch.h"				//Only for Visual Studio
#include<iostream>

int main()
{
	char space = ' ';
	int var;
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 4; j > i; --j)
		{
			std::cout << space;
		}
			
			for (int k = 0; k <= i; ++k)
			{
				std::cout << '*';
			}
		

		std::cout << std::endl;

	}

	return	0;
}


/*

Output:
    *
   **
  ***
 ****
*****

*/