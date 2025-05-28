#include<iostream>
using namespace std;
class employee
{
    public:
          employee()
          {
            cout<<"default constructor invoked"<<endl;
          }
          ~employee()
          {
            cout<<"destructor invoked"<<endl;
          }
};
int main()
{
    cout <<"in main function"<<endl;
    cout <<"1st object created"<<endl;
    employee e1;
    cout <<"2nd object created"<<endl;
    employee e2;
    cout <<"end of main function"<<endl;
    return 0;
}