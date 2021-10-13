#include <iostream>
using namespace std;

int main()
{   int n;
    cout<<" nhap so n ";
    cin>>n;
    int temp=n;
    for(int i=n;i>0;i--)
    {
        for(int j=temp;j>0;j--)
            cout<<i;
        cout<<endl;
        temp--;
    }
system("pause");
return(0);
}