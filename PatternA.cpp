#include<iostream>
using namespace std;
int main() {
    char r='A';
    char j='A';
    for(r='A'; r<='E'; r++){
        for(j='A'; j<=r; j++){
            cout<<j<<" ";
        }
        cout<<endl;
        }
}