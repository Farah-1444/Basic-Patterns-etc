#include<iostream>
using namespace std;
int main(){
    int n1, n2;
    cout<<"First digit is ";
    cin>>n1;
    cout<<"Second digit is ";
    cin>>n2;
    
    if(n1==n2){
    cout<<"Both integers are Equal.";}
    else if(n1>n2){
    cout<<"First digit is greater.";}
    else{
    cout<<"Second digit is greater";}
}