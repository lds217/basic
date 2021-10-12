#include <iostream>
using namespace std;

int main()
{   int n;int  j;
    cout<<"nhap so : ";
    cin>>n;  
    int x=1;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            for(j=0;j<n;j++)
            {
            cout<<1; 
            }
        }
        else
        {
            for(int k=0;k<n;k++)
            {
            cout<<0; 
            } 
        }
        cout<<endl; 
    }
system("pause");
return(0);
}