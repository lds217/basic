#include <iostream>
using namespace std;

int main()
{
    int n;int j;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(j=0;j<count;j++){
            cout<<"*";
        }
        if(j==count)
            cout<<"*"<<endl;
    count++;}
    system("pause");
	return(0);
}