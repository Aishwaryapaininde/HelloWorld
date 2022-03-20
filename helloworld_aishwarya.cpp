#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[26];
    for(int i=0;i<26;i++)
    {
        a[i]=65+i;
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]%12==0 && a[i]%36==0 && a[i]!=36 && a[i]<100)
        {
            cout<<a[i];
        }
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]%23==0 && a[i]%3==0 && a[i]<100)
        {
            cout<<a[i];
        }
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]%38==0 && a[i]%4==0 && a[i]<100)
        {
            cout<<a[i];
        }
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]%38==0 && a[i]%4==0 && a[i]<100)
        {
            cout<<a[i];
        }
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]%79==0 && a[i]<100)
        {
            cout<<a[i];
        }
    }
    cout<<" ";
    for(int i=0;i<26;i++)
    {
        if(a[i]%29==0 && a[i]%3==0 && a[i]<100)
        {
            cout<<a[i];
        }
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]%79==0 && a[i]<100)
        {
            cout<<a[i];
        }
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]%41==0 && a[i]%2==0 && a[i]<100)
        {
            cout<<a[i];
        }
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]%38==0 && a[i]%4==0 && a[i]<100)
        {
            cout<<a[i];
        }
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]%34==0 && a[i]%4==0 && a[i]<100)
        {
            cout<<a[i];
        }
    }
}