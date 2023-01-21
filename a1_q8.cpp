#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,k,x;
    cin>>n>>k;
    int rot=0;
    int n2=n,len,len1;
    while(n2>0){
        len1+=1;
        n2=n2/10;
    }
    len=len1-1;
    for(int i=0;i<k;i++){
        rot=floor(n/10);
        x=n%10;
        n=x*pow(10,len)+rot;
    }
    cout<<n<<endl;
    return 0;
}
