#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"n is ";
    cin>>n;
    if(n==0){
        cout<<"n is zero";
    }
    else if(n>=0){
        cout<<"n is positive";
    }
    else {
        cout<<"n is negative";
    }
}