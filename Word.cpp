#include <iostream>
#include<cctype>
#include<string>
using namespace std;

int main()
{
    string s;
    int a=0,b=0;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(isupper(s[i])){
            a++;
        }
        else{
            b++;
        }
    }
    if(a<=b){
        for(int i=0; i<s.length(); i++){
            cout<<char(tolower(s[i]));
        }
        }
    else if(a>b){
            for(int i=0; i<s.length(); i++){
            cout<<(char(toupper(s[i])));
    }}


return 0;}
