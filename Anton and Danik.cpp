#include <iostream>

using namespace std;

int main()
{
    int n,A=0,D=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0; i<n; i++){
        if(s[i]=='A'){
            A++;
        }
        if(s[i]=='D'){
            D++;
        }
    }
    if(A>D){
        cout<<"Anton";
    }
    else if(A<D){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
    return 0;
}
