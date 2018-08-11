#include<bits/stdc++.h>
using namespace std;
int ev =0,ei=0,evv=0;
int operation(string str)
{
    for(int i=0;i<str.length();i++)
    {
    if(str[i] == '@' && !isdigit(str[0]) )
    {
        ev=1;
    }
    else if( str[i] =='.')
    {
        evv=1;
    }
    else if(str[0] == '_' || str[i] == '$' || str[i] =='&' || str[i] == '!' || str[i] == '#' || str[i] == '-' || str[i] ==  '+' || str[0] ==  '@' || str[0] == '.' )
    {
       ei=1;
    }

    }
}

int main()
{
    string str;
    cin>>str;

    operation(str);

    if(ev == 1 && ei != 1 && evv ==1)
    {
        cout<<"Valid"<<endl;
    }
    else
      cout<<"InValid"<<endl;

}


/*#include<bits/stdc++.h>
using namespace std;
int ev =0,ei=0,At=0;

int operation(string str)
{
    for(int i=0;i<str.length();i++)
    {
    if(!isdigit(str[0]) )
    {
        if((str[i] == '@') and (str[i] == '.'))
        {
            ev=1;
        }
        else
            ev = 0;
    }

    else if(str[i] == '_' || str[i] == '$' || str[i] =='&' || str[i] == '!' || str[i] == '#' || str[i] == '-' || str[i] ==  '+')
    {
       ei=1;
    }

    }
}

int main()
{
    string str;
    cin>>str;

    operation(str);

    if(ev == 1 && ei != 1)
    {
        cout<<"Valid"<<endl;
    }
    else
      cout<<"InValid"<<endl;

}

*/
