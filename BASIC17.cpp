#include <iostream>
using namespace std;

int main()
{   int n;int m;
    cout<<"nhap so n : ";
    cin>>n;  
    cout<<"nhap so m : ";
    cin>>m;
    for(int i=0;i<n;i++)
    {
        if(i==0||i==n-1)
        {
            for(int k=0;k<m;k++)
                cout<<"*";  
        }
        else
            for(int j=0;j<m;j++)
            {
                if(j==0||j==m-1)
                    cout<<"*";
                else
                    cout<<" ";
            }
        cout<<endl;
    }
system("pause");
return(0);
}