 #include<iostream>
using namespace std;
int main()
{
    int a=20,d=10,*p1=&a,*p2=&d;
    cout<<"before swapping : *p1 = "<<*p1<<" *p2 = "<<*p2<<endl;
    *p1 = *p1 + *p2; 
    *p2 = *p1 - *p2; 
    *p1 = *p1 - *p2; 
    cout<<"after swapping : *p1 = "<<*p1<<" *p2 = "<<*p2<<endl;
    return 0;
}