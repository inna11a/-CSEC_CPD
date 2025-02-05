#include <iostream>
using namespace std;
int main()
{
    int a,c,r;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cin>>a;
            if(a==1){
               c=3-i;
               r=3-j;
               if(c<0){
                c=-c;
               }
               if(r<0){
                r=-r;
               }
            }
        }
    }
    cout<<r+c;
    return 0;
}
