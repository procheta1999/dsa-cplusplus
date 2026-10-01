#include <iostream>
#include <vector>
using namespace std;

vector<bool> Sieve(int n)
{
    vector<bool> isPrime(n+1,true);
    isPrime[0]=false;
    isPrime[1]=false;
    for(int i=2;i*i<=n;i++)
    {
        for(int j=2*i;j<=n;j=j+i)
        {
            isPrime[j]=false;
        }
    }
    return isPrime;
}
int main()
{
    vector<bool> primeNumbers=Sieve(10);
    for(int i=0;i<primeNumbers.size();i++)
    {
        if(primeNumbers[i]==true)
        {
            cout<<i<<endl;
        }
    }
}