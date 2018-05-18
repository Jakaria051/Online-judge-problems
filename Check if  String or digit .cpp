#include<bits/stdc++.h>
using namespace std;

int d=0,a=0,deci=0;

int operation(string str)
{
    for(int i=0;i<str.length();i++)
    {
    if(isdigit(str[i]))
    {
        d=1;
    }
    else if(isalpha(str[i]))
    {
       a=1;
    }
    else if(str[i] == '.')
    {
       deci=1;
    }

    }
}

int main()
{
    string str;

   cin>>str;

   operation(str);

   if(str == "CSE" || str== "cse")
    {
        cout<<"Computer Science & Engineering"<<endl;
    }
    else if(str == "IF" || str == "if")
    {
        cout<<"IF"<<endl;
    }

   else if(d==1 && a !=1 && deci !=1)
   {
      cout<<"Digit Number"<<endl;
   }
   else if(a==1 && d !=1)
   {
      cout<<"ALfa Numeric"<<endl;
   }
   else if(deci == 1)
   {
     cout<<"Decimal Number"<<endl;
   }
   else
   cout<<"Character Stream";

}
