#include<iostream>
using namespace std;
int main() {

int sum=0;
int avg;
for(int i=1; i<=10; i++)
{    
    sum=sum+i;                   //for SUM
}                             

avg=sum/10;                         //Average
cout<<"Average of 10 numbers is "<<avg;     //Printing Average 

}