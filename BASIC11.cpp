#include <iostream>
using namespace std;

int main()
{   int n;
    cout<<"nhap so : ";
    cin>>n;
    int temp=n-1;
    int temp2=1;
    for(int i=0;i<n;i++)
    {
        for(int j=temp;j<n;j++){
        cout<<"*";}
        cout<<endl;
        temp--;
    }
    for(int i=0;i<n;i++)
    {
        for(int x=temp2;x<n;x++)
        {
            cout<<"*";
        }
        temp2++;
        cout<<endl;
    }
system("pause");
return(0);
}