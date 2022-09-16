void addition(void);
void division(void);
void subtraction(void);
void multiplication(void);
#include<iostream>

using namespace std;

int main()
{
    while(1)
    {
    cout<<"Enter your choice"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Multiplication"<<endl;
    cout<<"3.Substaction"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"5.Exit"<<endl;
    int choice;
    cin>>choice;
     
    
        // system(cls);
    switch(choice)
    { 
        case 1:
        addition();
        break;
        case 2:
        multiplication();
        break;
        case 3:
        subtraction();
        break;
        case 4:
        division();
        break;
        case 5:
        exit(0);
        default:
        cout<<"Invalid choice"<<endl;
        
        }   
    }exit(0);
    return 0;
}
void addition(void)
{
    int a,b;
    cout<<"Enter two numbers :"<<endl;
    cin>>a;
    cin>>b;
    cout<<" "<<a<<" + "<<" "<<b<<"="<<a+b<<endl;
}
void multiplication(void)
{
    int a,b;
    cout<<"Enter two numbers :"<<endl;
    cin>>a>>b;
    cout<<" "<<a<<" * "<<b<<" = "<<a*b<<endl;
}
void subtraction(void)
{
    int a,b;
    cout<<"Enter two numbers : "<<endl;
    cin>>a>>b;
    cout<<" "<<a<<" - "<<b<<" = "<<a-b<<endl;
}
void division(void)
{
    int a,b;
    cout<<"Enter two numbers : "<<endl;
    cin>>a>>b;
    cout<<" "<<a<<" / "<<b<<" = "<<a/b<<endl;
}