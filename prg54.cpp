#include<iostream>
using namespace std;
int main()
{
    int num,den;
    cout<<"enter 2 numbers: ";
    cin>>num>>den;
    try
    {
        {
            if(den == 0)
                throw (den);
            else
                cout << num / den << endl;
        }
    }
    catch(int d)
    {
    cout << "divide by zero error: cannot divide by" << d << endl;
    }
    return 0;
}

    