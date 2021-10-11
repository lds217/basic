#include <iostream>
using namespace std;

int main()
{
    int n;int j;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++)
    {   
        if(i==n-1)
        {
            for(int k=0;k<i;k++)
                cout<<"*";
        }
        else
        {
            for(j=0;j<count;j++){
                if(j==0||j==count-1)
                    cout<<"*";
                else 
                    cout<<" ";    
            }
           cout<<endl;
        count++;
        }
    }
    cout<<endl;
    system("pause");
	return(0);
}