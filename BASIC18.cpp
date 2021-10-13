#include <iostream>
using namespace std;

int main()
{   int n;
    cout<<" nhap so n ";
    cin>>n;
    int temp=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=temp;j<=n;j++)
            cout<<i;
        cout<<endl;
        temp--;
    }
system("pause");
return(0);
}