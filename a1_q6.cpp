#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int x;
    while(n>0){
        x=n%10;
        n=floor(n/10);
        cout<<x<<endl;
    }
    return 0;
}
