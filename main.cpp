#include <iostream>

using namespace std;


int main()
{
    int n,nper;
    cin>>n;
    int arr[n][n];
    nper=n;
    int a=1;

    /////////////////////////////////////////////////
    for(int i0=0;i0<n;i0++)
    {
        for(int j0=0;j0<n;j0++)
        {
            arr[i0][j0]=0;
        }
    }

for(int c=0,d=0;(c<=nper/2)&&(d<=nper/2);c++,d++)
{
    /////////////////////////////////////////////////
    int i=c,j=d;
    /////////////////////////////////////////////////
    for(;j<n;)
    {
        arr[i][j]=a;
        a++;
        j++;
    }
    j--;
    i++;
    /////////////////////////////////////////////////
    for(;i<n;)
    {
         arr[i][j]=a;
        a++;
        i++;
    }
    i--;
    j--;
    for(;j>=d;j--)
    {
        arr[i][j]=a;
        a++;
    }
    j++;
    i--;
    /////////////////////////////////////////////////
    for(;i-j>=1;i--)
    {
        arr[i][j]=a;
        a++;
    }

n--;
}



    for(int i=0;i<nper;i++)
    {
        for(int j=0;j<nper;j++)
        {
            cout<<arr[i][j]<<"\t";
        }cout<<endl;
    }
    return 0;
}


