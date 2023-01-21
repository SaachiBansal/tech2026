#include <iostream>
using namespace std;

int main(){
    int num1,num2,gcd;
    cin>>num1>>num2;
    int sm;
    if(num1>num2){
        sm=num2;
    }
    else{
        sm=num1;
    }
    for(int i=1;i<=sm;i++){
        if(num1%i==0 and num2%i==0){
            gcd=i;
        }
    }
    cout<<gcd<<endl;
    int lcm=(num1*num2)/gcd;
    cout<<lcm;
    return 0;
}
