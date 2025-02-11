#include <iostream>

using namespace std;

int main()
{
    int n,a[1000],b=0,s=0,d=0;
    bool turn=true;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int c=n-1;
    while(c>=b){
        if(a[c]>=a[b]){
            if(turn){
                s+=a[c];
            }
            else {
                d+=a[c];
            }
           c--;
        }
        else {
            if(turn){
                s+=a[b];
            }
            else {
                d+=a[b];
            }
            b++;
        }
        turn=!turn;
    }
    cout <<s<<" "<<d;
    return 0;
}

