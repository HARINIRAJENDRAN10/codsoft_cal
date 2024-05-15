// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int a, b,n, m;
    cout<<"PERFORMING SIMPLE CALCULATOR OPERATIONS"<<endl;
    cout<<" 1.ADDITION \n 2.SUBTRACTION \n 3.MULTIPLICATION \n 4.DIVISION"<<endl;
    cout<<"ENTER CHOICE:";
    cin>>n;
    do
    {
        cout<<"ENTER TWO NUMBERS:";
        cin>>a>>b;
        switch(n)
        {
            case 1:
            {
                cout<<"PERFORMING ADDITION OPERATION"<<endl;
                cout<<"THE ANSWER IS:"<<a+b<<endl;
                break;
            }
            case 2:
            {
                cout<<"PERFORMING SUBTRACTION OPERATION"<<endl;
                cout<<"THE ANSWER IS:"<<a-b<<endl;
                break;
            }
            
            case 3:
            {
                cout<<"PERFORMING MULTIPLICATION OPERATION"<<endl;
                cout<<"THE ANSWER IS:"<<a*b<<endl;
                break;
            }
            case 4:
            {
                cout<<"PERFORMING DIVISION OPERATION"<<endl;
                cout<<"THE ANSWER IS:"<<a/b<<endl;
                break;
            }
            
        }
        cout<<"IF YOU WANT TO CONTINUE PRESS 0"<<endl;
        cin>>m;
    }while(m==0);
    return 0;
}