#include <iostream>
using namespace std;


void nums(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    nums(n-1);
}
int main(){
    int a=5;
    nums(a);
}