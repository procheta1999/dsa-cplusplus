#include <iostream>
#include <vector>
using namespace std;
int findNonRepeatingElement(vector<int>& arr)
{
    int res=0;
    for(int i=0;i<arr.size();i++)
    {
        res=res^arr[i];
    }
    return res;
}
int main()
{
    vector<int> arr={2,3,4,3,2,5,5};
    cout<<(findNonRepeatingElement(arr))<<endl;
}