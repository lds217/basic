#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"nhap so ";
    cin>>n;
    int count=n;
    for(int i=0;i<n;i++)
    { for(int x=0;x<i;x++)
        cout<<"!";
        for(int j=0;j<n;j++)
            cout<<"*";
    cout<<endl;
    }
    system("pause");
	return(0);
}

    

