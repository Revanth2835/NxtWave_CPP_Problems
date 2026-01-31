#include <iostream>
using namespace std;


void nums(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    nums(i+1,n);
}
int main(){
    int a=5;
    int i=1;
    nums(i,a);
}