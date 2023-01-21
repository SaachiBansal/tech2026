#include <iostream>
#include<math.h>
using namespace std;

int main (){
    int n;
    cin>>n;
    int n2=n,len=0,x,inv=0,i=1;
    while(n2>0){
        len+=1;
        n2=n2/10;
    }
    while(n>0){
        x=n%10;
        n=n/10;
        int y=x-1;
        int w=pow(10,y);
        inv+=i*w;
        i+=1;
    }
    cout<<inv<<endl;
    return 0;
}
