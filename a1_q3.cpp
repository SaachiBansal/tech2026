#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;
    for (int i=0;i<t;i++){
        int n;
        cin>>n;
        int j=2,p=1;
        for(;j<n;j++){
            if(n%j==0){
                p=0;
                break;
            }
        }
        if(p==0){
            cout<<"not prime"<<endl;
        }
        else{
            cout<<"prime"<<endl;
        }
    }
}
