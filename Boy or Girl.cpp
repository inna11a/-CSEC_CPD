#include <iostream>
using namespace std;
int main()
{
    string a;
    int m=0;
    cin>>a;
    int c=a.length();
    for(int i=0; i<c; i++){
        for(int j=i+1; j<c; j++){
            if(a[i]==a[j]){
                m++;
                break;
            }
        }
    }
    if((c-m)%2==0){
        cout<<"CHAT WITH HER!";
        }
    else{
        cout<<"IGNORE HIM!";

    }
    return 0;
}
