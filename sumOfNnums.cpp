#include <iostream>
using namespace std;


int nums(int n){
    if(n==0){
        return 0;
    }
    
    return n + nums(n-1);
}
int main(){
    int a=5;
    cout<<nums(a)<<endl;
}