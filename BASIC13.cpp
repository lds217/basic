#include <iostream>
using namespace std;

int main()
{   int n;int  j;
    cout<<"nhap so : ";
    cin>>n;  
    int temp=n;
    int x=1;
    for(int i=0;i<n;i++)
    {
        for(j=x;j<=temp;j++)
        {
            cout<<j; 
            cout<<" ";
        }
        x=j;
        temp=temp+n;
        cout<<endl; 
    }
system("pause");
return(0);
}