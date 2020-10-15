#include<bits/stdc++.h>
using namespace std;
int main()
 {
int p;
cin>>p;
while(p--)
{
    int n;
    cin>>n;
    int arr1[n],arr2[n],temp[n];
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    
    for(int i=0;i<n;i++)
    {
        temp[i]=arr1[i]-arr2[i];
    }
    int length=0;
bool flag=false;
int sum=0,k=0;
int maxlength=INT32_MIN;
for(int i=0;i<n;i++)
{
    sum=sum+temp[i];
    if(sum==k)
    {
        maxlength=i+1;
        flag=true;
    }
    else if(m.find(sum-k)!=m.end())
    {
        length=i-m[sum-k];
        if(maxlength<length)
        {
                        flag=true;
                        maxlength=length;
        }
    }
    if(m.find(sum)==m.end())
    {
        m[sum]=i;
    }
}
if(flag)
{
    cout<<maxlength<<endl;
}
else
{
    cout<<"0"<<endl;
}
}
}