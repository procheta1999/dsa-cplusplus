#include <iostream>
using namespace std;
int setIthBitOfN(int n, int i)
{
    int mask =1<<i;
    return (mask | n);
}
int main()
{
    int n,i;
    cin>>n>>i;
    cout<<setIthBitOfN(n,i)<<endl;
}