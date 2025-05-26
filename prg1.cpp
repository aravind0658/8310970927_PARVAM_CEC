#include<iostream>
using namespace std;
int main()
{
    int n,sum,i,num;
    cout<<"enter the n number:";
    cin>>n;
    for(i=1;i<n;i++)
    {
        
        sum=sum+i;
        cout<<"sum:"<<sum<<"\n";
     }
     cout<<" the sum of the number is: "<<sum<<endl;
     return 0;

}