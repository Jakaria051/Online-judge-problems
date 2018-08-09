#include<bits/stdc++.h>
using namespace std;
#define DELIM "."

int is_digit(char *ch)
{
    if(isdigit(*ch))
        return 1;
    return 0;
}

int is_valid_ip(char *ch)
{
    char *ch1;
    int int_convert,dot=0;

    if(ch == NULL)
        return 0;

    ch1 = strtok(ch,DELIM);

    if(ch1 == NULL)
        return 0;

    while(ch1)
    {
        if(!is_digit(ch1))
            return 0;

        int_convert = atoi(ch1);

        if(int_convert >= 0 && int_convert <= 255)
        {
            ch1 = strtok(NULL,DELIM);
            if(ch1 != NULL)
            {
                ++dot;
            }

        }
        else
            return 0;

    }

    if(dot != 3)
        return 0;
    return 1;

}





int main()
{
   char ch[100];
   scanf("%s",&ch);
   is_valid_ip(ch) ? printf("Valid") : printf("Invalid");
   return 0;
}








/*
#include "bits/stdc++.h"
using namespace std;
#define DELIM "."


int valid_digit(char *str)
{
	if(isdigit(*str))
        return 1;
    else
        return 0;
}

///return 1 if IP string is valid, else return 0

int is_valid_ip(char *str)
{
	int i, num, dots = 0;
	char *ptr;

	if (str == NULL)
		return 0;


	/// The C library function char *strtok(char *str, const char *delim) breaks string str into a series of tokens using the delimiter delim

	ptr = strtok(str, DELIM);

	if (ptr == NULL)
		return 0;

	while (ptr) {

		/// after parsing string, it must contain only digits

		if (!valid_digit(ptr))
			return 0;

		num = atoi(ptr);

		/// check for valid IP

		if (num >= 0 && num <= 255) {
			/// parse remaining string
			ptr = strtok(NULL, DELIM);
			if (ptr != NULL)
				++dots;
		} else
			return 0;
	}

	// valid IP string must contain 3 dots
	if (dots != 3)
		return 0;
	return 1;
}

int main()
{
    char ip1[100];
	scanf("%s",&ip1);
	is_valid_ip(ip1)? printf("Valid\n"): printf("Not valid\n");
	return 0;
}

*/
