#include "mylib.h"

int main()
{

        system("clear");
	int n;
    do
    {
        n = menu();
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
			int tmp = password();
			if(tmp == 0)
			{
		        system("clear");
				printf("Sign Up successfully\n");
        	}
		}
    } while (n != 4);
	
	return 0;
}