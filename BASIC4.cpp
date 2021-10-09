#include <iostream>
using namespace std;

int main()
{
    int n;int j;int k;
    cin>>n;
    int count=n;
    for(int i=0;i<n;i++)
    {
        for(j=1;j<count;j++)
        {
            cout<<" ";
        }
        if(j==count)
            for(int k=n;k>=j;k--)  
                 cout<<"*"; 
             cout<<endl;
    count--;
    }
    system("pause");
	return(0);
}