#include <iostream>
#include<string>
using namespace std;

int main()
{
    int a,b,c,d,e=0;
    string s;
    cin>>a>>b>>c>>d;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='1') e+=a;
        else if(s[i]=='2') {e+=b;}
        else if(s[i]=='3') {e+=c;}
        else if(s[i]=='4') {e+=d;}
    }
    cout<<e;
    return 0;
}
