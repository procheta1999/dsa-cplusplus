#include <iostream>
using namespace std;

int findNoOfX(int n)
{
    int count=1;
    while(n!=0)
    {
        if((n&1)==0)
        {
            count=count<<1;
        }
        n=n>>1;
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    cout<<findNoOfX(n)<<endl;
}