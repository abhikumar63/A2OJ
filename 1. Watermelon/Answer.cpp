#include<iostream>
using namespace std;
int main(){
    int w;
    cin>>w;
    if(w==1 || w==2)
        cout<<"NO"<<endl;
    else if(((w/2)%2 == 0) && ((w-(w/2))%2 == 0)){
        cout<<"YES"<<endl;
    }
    else if(((w/2 + 1)%2 == 0) && ((w-(w/2) - 1)%2 == 0))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}