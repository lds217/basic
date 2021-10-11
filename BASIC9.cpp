#include <iostream>
using namespace std;

int main()
{
int n;int j;int k;
cin>>n;
int count=n;
for(int i=0;i<n;i++)
{ 
    for(k=count;k<n;k++) 
        cout<<" ";
    if(k==n) 
    {
        for(int j=0;j<count;j++)
            cout<<"x";
    }
cout<<endl;
count--;
}
system("pause");
return(0);
}