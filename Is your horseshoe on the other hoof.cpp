#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    long long a[4];
    a[0]=s1;
    a[1]=s2;
    a[2]=s3;
    a[3]=s4;

    long long i,j;
    int sum=0;

    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(a[i]==a[j]){sum++; a[j]=rand();}
        }
    }
    cout<<sum<<endl;

    return 0;
}
