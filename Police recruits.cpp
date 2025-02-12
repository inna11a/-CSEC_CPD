#include <iostream>
using namespace std;
int main()
{
    int n,c=0,p=0;
    cin>>n;
    for(int i=0; i<n; i++){
            int a;
        cin>>a;
    if(a>0){
        p+=a;
    }
    else{
        if(p<1){
            c++;
        }
        else{
            p--;
        }
    }
    }
    cout<<c;
    return 0;
}
