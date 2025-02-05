#include <iostream>
using namespace std;
int main()
{
    int n,b[100],m[100];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>b[i];
        int j=i;
            while(j>0&&b[j]<b[j-1]){

                m[j]=b[j-1];
                b[j-1]=b[j];
                b[j]=m[j];
                j--;
            }
    }
    for(int i=0; i<n; i++){
        cout<<b[i]<<" ";
    }
    return 0;
}
