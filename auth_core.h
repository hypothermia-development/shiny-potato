#include <iostream>
#include <stdlib.h>

/*


Authentication Core V1

This authentication program (very bad) is to very lightly secure the more important aspects of a server


*/



int num_of_attempts_login;
bool didLogin;

bool hasAccess;


int password;



bool doLogin(password, didLogin)
{
	int guessed_password;
	std::cout << "enter password: ";
	cin >> guessed_password;

	if(password = guessed_password)
	{
		didLogin = true;
		return didLogin;
	}
	else
	{
		didLogin = false;
		return didLogin;
	}
}


void onAttempt(num_of_attempts_login, didLogin)
{
	if (num_of_attempts_login > 3)
	{
		std::cout << "You have been locked out of this program";
		exit()

	}
	if (num_of_attempts_login < 3)
	{
		if(didLogin == true)
		{
		// call give access program

		}
		else 
		{
			std::cout << "You have been locked out of this program";
			exit()
		}
	}
}





