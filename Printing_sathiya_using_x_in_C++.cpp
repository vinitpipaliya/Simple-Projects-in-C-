#include<iostream>

using namespace std;
//printing sathiya in c++:
int main()
{
    int i,j;
    for ( i = 1; i <=9; i++)
    {
        for ( j = 1; j <=9; j++)
        {
            if (i<=5&&j==1)
            {
                cout<<"* ";
            }
            else if (i>=5&&j==9)
            {
                cout<<"* ";
            }
            else if (i==9&&j<=5)
            {
                cout<<"* ";
            }
            else if (i==1&&j>=5)
            {
                cout<<"* ";
            }
            else if (i<=9&&j==5)
            {
                cout<<"* ";
            }
            else if (i==5&&j<=9)
            {
                cout<<"* ";
            }
            else if ((i==3&&j==3)||(i==3&&j==7)||(i==7&&j==3)||(i==7&&j==7))
            {
                cout<<"* ";
            }
            
            else
            {
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }
    

    return 0;
}