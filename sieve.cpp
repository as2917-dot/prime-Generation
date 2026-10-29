#include<iostream>
#include<vector>
using namespace std;

int main()
{
        long long n,i,j,primeCount=0;
		cout<<"Enter the value of n:";
		cin>>n;
		
		bool* prime= new bool[n+1]; 
		for (long i = 0; i <= n; i++) prime[i] = true;
	    //vector<bool> prime(n,true);
		
		prime[0]=prime[1]=false;
		for(i=2;i*i<=n;i++)
		{
		if(prime[i]==true)
		{
		for(j=i*i;j<=n;j+=i) prime[j]=false;
		}
		}
		
		for(i=2;i<=n;i++) 
		{
		if(prime[i]==true) primeCount++;
		}
		
		cout<<"No. of primes found till n="<<primeCount<<"\n";
}