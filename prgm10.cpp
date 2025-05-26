
#include<iostream>
using namespace std;

int main()
{
    int n,digit,rev=0;
    cout<<" Enter a number: ";
    cin>>n;
    while(n>0)

    {
        digit=n%10;
        cout<<"digit="<<digit<<endl;
        n=n/10;
        rev=rev*10+digit;
        cout<<"reverse="<<rev<<endl;
    }

        return 0;
    
}