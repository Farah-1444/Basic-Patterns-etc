#include<iostream>
using namespace std;
int main(){
    
    for(int i=1; i<=4; i++){
        for(int h=4; h>=i; h--){
            cout<<" ";
        }
        for(char j='A'; j<'A'+i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}