#include <iostream>
using namespace std;

int noOfBitsToConvertAToB(int a, int b)
{
    int n=a^b;
    int count=0;
    // while(n!=0)
    // {
    //     if((n&1)==1)
    //     {
    //         count++;
    //     }
    //     n=n>>1;
    // }
    while(n!=0)
    {
        count++;
        n=n&(n-1);
    }
    return count;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<(noOfBitsToConvertAToB(a,b))<<endl;
}