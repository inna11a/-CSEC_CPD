#include <iostream>
using namespace std;
int main()
{
    int n,h,a,c=0;
    cin>>n>>h;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a>h){
            c++;
        }
    }
    cout<<n+c;
    
    return 0;
}
