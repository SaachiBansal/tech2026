#include<iostream>
using namespace std;
int main(int argc, char**argv){
    int marks;
    cin>>marks;
    if (marks>90){
        cout<<"excellent"<<endl;
    }
    else if(80<marks and marks<=90){
        cout<<"good"<<endl;
    }
    else if(70<marks and marks<=80){
        cout<<"fair"<<endl;
    }
    else if(60<marks and marks<=70){
        cout<<"meets expectations"<<endl;
    }
    else if(marks<=60){
        cout<<"below par"<<endl;
    }
    
}
