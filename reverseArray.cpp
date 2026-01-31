#include <iostream>
using namespace std;


void reverse(int i , int a[],int n){
    if(i>=n/2){
        return;
    }
     swap(a[i],a[n-i-1]);
    return reverse(i+1,a,n);
   

}
int main(){
    int a=5;
    int arr[]={1,2,3,4,5};
    reverse(0,arr,a);
    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}