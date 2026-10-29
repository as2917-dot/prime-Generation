#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

bool isPrime(int n)
{
	for(int i=2;i*i<=n;i++)
	{
	if(n%i==0) return false;
	}
	return true;
}

int main()
{
	int n,primeCount=0,count=0,flag=0,lastPrime;
	cout<<"Enter the value of n:";
	cin>>n;
	
	int sqn=(int) sqrt(n);
	
	vector<int> prime;
	
	for(int i=2;i<=sqn;i++)
	{
    if(isPrime(i)) prime.push_back(i);
	}
	
	for(int i=2;i<=n;i++)
	{
	 count=0;
	 flag=0;
	 while(count<prime.size()&& prime[count]*prime[count]<=i)
	 {
	 if(i%prime[count]==0 && i!=prime[count]) {flag=1;break;}
	 count++;
	 }
	 if(flag==0) {primeCount++;lastPrime=i; cout<<i<<" ";}
	}
	cout<<"\nNumber of primes generated till n were: "<<primeCount<<"\n";
    cout<<"p_"<<primeCount<<" is: "<<lastPrime<<"\n";
}	