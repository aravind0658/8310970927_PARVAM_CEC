/*add the element into the array and find average  */
#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    float avg;
    cout<<"enter the n value:";
    cin>>n;
    int a[n];
    cout<<"enter the array elements:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum +=a[i];
    }
    avg = static_cast<float>(sum) / n;
    cout<<"sum of the array elements is:"<<sum<<endl;
    cout<<"average of the array elements is:"<<avg<<endl;
    
    return 0;


}