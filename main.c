#include "mylib.h"

int main()
{
	int		n;
	system("clear");
	n = menu();
	while (1)
	{
		if (n == 1)
		{
			int tmp = SignUp();
			if( tmp== 0)
			{
				system("clear");
				printf("Sign Up successfully\n");
			}
		}
		if(n == 3)
		{
			int	tmp = password();
			if(tmp == 0)
			{
				system("clear");
				printf("Sign Up successfully\n");
			}
		}

		if (4 == menu())
			break;
	}
	
	return 0;
}