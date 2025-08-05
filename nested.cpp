#include<iostream>
using namespace std;
int main() {
    int n;
cout<<"Number is ";
cin>>n;

if(n==0){
cout<<"Zero";}

else if(n!=0){
    if(n>=0){
        cout<<"Positive";
    }
    else{
        cout<<"Negative";
    }
}

return 0;
}

