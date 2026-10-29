#include<iostream>
using namespace std;
int main()
{
int i,j,count=0,num;
cout<<"Enter a number:";
cin>>num;
for(i=2;i<=num;i++)
{
count=0;
for(j=2;j<i*i;j++)
{
if(i%j==0) count++;
}
if(count==1) cout<<i<<" ";
}
}
