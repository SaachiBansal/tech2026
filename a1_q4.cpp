#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int low, high;
    cin >> low >> high;
    int i=low;
    for(;i<=high;i++){
        int j=2;
        int flag=0;
        for(;j<i;j++){
            
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<i<<endl;
        }
    }
}
