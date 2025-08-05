#include<iostream>
using namespace std;
int main()
{
    int digit;
    cout<<"Digit is ";
    cin>>digit;
    switch(digit)
{
    case 0:
    cout<<"In word it's Zero.";
    break;
    case 1:
    cout<<"In word it's One.";
    break;
    case 2:
    cout<<"In word it's Two.";
    case 3:
    cout<<"In word it's Three.";
    break;
    case 4:
    cout<<"In word it's Four.";
    break;
    case 5:
    cout<<"In word it's Five.";
    break;
    case 6:
    cout<<"In word it's Six.";
    break;
    case 7:
    cout<<"In word it's Seven.";
    break;
    case 8:
    cout<<"In word it's Eight.";
    break;
    case 9:
    cout<<"In word it's Nine.";
    break;
    default:
    cout<<"INVALID";
    break;

}
}