#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int num=0;

    for(int i=0;i<str.length();i++)
    {
        if(isdigit(str[i]) && str.length() == 11)
        {

            if((str[0] == '0' && str[1] == '1') && (str[2] == '5' ||str[2]== '6' ||str[2]== '7' ||str[2]=='8'||str[2]== '9'))
            {
                num=1;
                str = "+88"+str;

            }

        }
        if(str[0] != '+')
        {
            num = 0;
        }

        if(str[0] == '+' && str.length() == 14)
        {
            num = 1;
        }



    }

    if(num==1)
    {
        cout<<"valid Number"<<endl;
    }
    if(num != 1)
        cout<<"Invalid nummber"<<endl;
}
