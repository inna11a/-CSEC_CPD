#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i<n-1; i++){
        if(s[i]==s[i+1]){
            c++;
        }
    }
    cout<<c;
    return 0;
}
