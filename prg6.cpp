/*calulate the compound intrest*/
#include<iostream>

using namespace std;
int main()
{
    double p, r, t, ci;
    cout<<"enter th principal amount: ";
    cin>>p;
    cout<<"enter the rate of intrest: ";
    cin>>r;
    cout<<"enter the time period: ";
    cin>>t;
    ci = (p * r * t) / 100;
    cout<<"compound intrest is: "<< ci << endl;
    return 0;
}

