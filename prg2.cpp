#include<iostream>
using namespace std;
int main()
{
    int n,i,fact=1;
    cout<<"enter the n number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        
        fact=fact*i;
        cout<<"the factorial of:"<<fact<<"\n";
     }
     cout<<" total factorial number is: "<<fact<<endl;
     return 0;

}