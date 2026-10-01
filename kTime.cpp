#include <iostream>
#include<vector>
using namespace std;

long findNonRepeatingElement(vector<int>& arr,int k)
{
    vector<int> resArr(32,0);
    for(int i=0;i<arr.size();i++)
    {
        int n=arr[i];
        int j=0;
        // cout<<n<<endl;
        while(n!=0)
        {
            int bit=n&1;
            resArr[j]=resArr[j]+bit;
            // cout<<j<<" "<<resArr[j]<<endl;
            n=n>>1;
            j++;
        }
        // cout<<"end of number"<<endl;
    }
    for(int i=0;i<resArr.size();i++)
    {
        resArr[i]=resArr[i]%k;
        // cout<<i<<" "<<resArr[i]<<endl;
    }
    int bitPos=0;
    long sum=0;
    for (int i=0;i<resArr.size();i++)
    {
        sum=sum+(resArr[i]*pow(2,i));
    }
    return sum;
}
int main()
{
    vector<int> arr ={100,2,3,45,100,2,3,100,2,3};
    cout<<findNonRepeatingElement(arr,3)<<endl;
}
