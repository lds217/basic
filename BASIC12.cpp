#include <iostream>
using namespace std;

int main()
{   int n;
    cout<<"nhap so : ";
    cin>>n;  
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n;j++){
        cout<<j;}
        cout<<endl; 
    }
system("pause");
return(0);
}