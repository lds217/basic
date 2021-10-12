#include <iostream>
using namespace std;

int main()
{   int n;int  j;
    cout<<"nhap so : ";
    cin>>n;  
    int x=1;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            for(j=0;j<n;j++)
            {
                if(j%2!=0)
                    cout<<1; 
                else
                    cout<<0;
            }
        }
        else
        {
            for(int k=0;k<n;k++)
            {
            if(k%2!=0)
                    cout<<0; 
                else
                    cout<<1;
            } 
        }
        cout<<endl; 
    }
system("pause");
return(0);
}