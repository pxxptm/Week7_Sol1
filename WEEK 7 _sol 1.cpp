#include<iostream>
using  namespace std;

main()
{
    string s;
    cout << "input String : ";
    getline(cin,s);
    int ans[26]={};

    int i=0;
    for(;s[i]!='\0';i++)
    {
        s[i]=tolower(s[i]);
        ans[s[i]-'a']++;
    }

    for(i=0;i<26;i++)
    {
        char c='A'+i;
        cout << c << " : " << ans[i] << "\n";
    }
    return 0;
}
