#include <iostream>
using namespace std;

int main()
{
    int n;int j;
    cout<<"nhap so ";
    cin>>n;
    int count=n;
    for(int i=0;i<n;i++)
    { 
        if(i==0||i==n-1)
        {for(j=0;j<n;j++)
        cout<<"*";
        } 
        else
            {for(int k=0;k<n;k++)
            if(k==0||k==n-1)
                cout<<"*";
            else
                 cout<<" ";
            } 
        cout<<endl;
        cout<<endl;    
    }
    system("pause");
	return(0);
}
