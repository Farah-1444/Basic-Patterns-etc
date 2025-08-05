#include<iostream>
using namespace std;
int main()
{
    int Age;
    cout<<"My Age in years is ";
    cin>>Age;

    int months;             //Age in months
    months=(Age*12);
    cout<<"My Age in Months is "<<months<<endl;

    int days;                  //Age in days
    days=(Age*365);
    cout<<"My Age in Days is "<<days<<endl;

    int hours;               //Age in hours
    hours=(Age*365*24);
    cout<<"My Age in hours are "<<hours<<endl;

    int min;              //Age in minutes
    min=(Age*365*24*60);
    cout<<"My Age in Minutes are "<<min<<endl;

    int sec;               //Age in seconds
    sec=(Age*365*24*60*60);
    cout<<"My age in Seconds are "<<sec<<endl;

}