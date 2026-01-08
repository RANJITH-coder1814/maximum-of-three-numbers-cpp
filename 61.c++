#include<iostream>
using namespace std;
int maximum(int x,int y,int z){
    if(x>y){
        cout<<x;
    }
    else if(y>z){
        cout<<y;
    }
    else{
        cout<<z;
    }
}
int main(){
    int a=10,b=6,c=7,r;
    r=maximum(a,b,c);
    cout<<r;
    return 0;
}