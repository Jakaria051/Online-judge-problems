#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector <int> input;
    //vector <int> :: iterator it;
    int len,count=1;
    string s;
    cin>>s;
    len = s.length();

    /*for(int i=0;i<len;i++)
    {
        //int j;
        //cin>>j;

        input.push_back(i);

    }*/

    for(int i=0;i<len;i++)
    {
        if(s[i]>=65 && s[i]<=90)
            count++;
    }
    cout<<count<<endl;

}

/*
input:
saveChangesInTheEditor
output :
5
*/
