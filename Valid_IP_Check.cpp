#include<bits/stdc++.h>
using namespace std;
#define DELIM "."

int is_digit(char *ch)
{
    if(isdigit(*ch))
        return 1;
    return 0;
}

///return 1 if IP string is valid, else return 0

int is_valid_ip(char *ch)
{
    char *ch1;
    int int_convert,dot=0;

    if(ch == NULL)
        return 0;

/// The C library function char *strtok(char *str, const char *delim) breaks string str into a series of tokens using the delimiter delim
	
	
	
    ch1 = strtok(ch,DELIM);

    if(ch1 == NULL)
        return 0;

    while(ch1)
    {
       /// after parsing string, it must contain only digits
	    
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
/// valid IP string must contain 3 dots
	
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







