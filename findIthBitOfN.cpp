#include <iostream>
using namespace std;

int findIthBitOfn (int n, int i)
{
    int mask =1<<i;
    int ans=mask&n;
    if(ans==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n,i;
    cin>>n;
    cin>>i;
    cout<<findIthBitOfn(n,i)<<endl;
}