#include <iostream>
using namespace std;

int main()
{   int n;int i;
    cout<<" nhap so n ";
    cin>>n;
    int temp=0;
    int count=n;
    for(i=1;i<=n;i++)
    {
        for(int k=temp;k<n;k++)
            cout<<count;   
        cout<<endl;
        count--;
        temp++;
    }
system("pause");
return(0);
}