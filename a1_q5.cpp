#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count=0;
    while(n>0){
        count+=1;
        n=n/10;
    }
    cout<<count;
}
