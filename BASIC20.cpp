#include <iostream>
using namespace std;

int main()
{   int n;int i;
    cout<<" nhap so n ";
    cin>>n;
    int temp=1;
    int count=n;
    for(i=1;i<=n;i++)
    {
        for(int k=1;k<=n;k++)
           {if(i==k)
                for(int j=n;j>=k;j--)
                    cout<<count;   
            else
                cout<<" ";}   
        cout<<endl;
        count--;
        temp++;
    }
system("pause");
return(0);
}