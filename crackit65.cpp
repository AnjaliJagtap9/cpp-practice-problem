#include<iostream>
using namespace std;
int main(){
    double a,b;
    int  choice;
    do{
            cout << "\n--- Menu Calculator ---" << endl;
            cout << "1) Add" << endl;
            cout << "2) Subtract" << endl; 
            cout << "3) Multiply" << endl; 
            cout << "4) Divide" << endl; 
            cout << "5) Quit" << endl;
            cout<<"Enter your choice:";
            cin>>choice;
            if(choice>=1 && choice<=4){
                cout<<"Enter two numbers:";
                cin>>a>>b;

            }
            switch (choice)
            {
            case 1:
                 cout<<"Result="<<a+b<<endl;
                break;
            case 2:
                cout<<"Result="<<a-b<<endl;
                break;
            case 3:
                cout<<"Result="<<a*b<<endl;
                break;
            case 4:
                if(b!=0){
                    cout<<"Result="<<a/b;
                }
                else{
                    cout<<"cannot divide by zero "<<endl;
                }
                break;
            case 5:
             cout<<"Calculator closed";
             break;

            default:
            cout<<"Invalid choice !try ahain";
                break;
            }
        }
        while(choice!=5);
        return 0;
}