#include <iostream>
#include <vector>
using namespace std;

vector<int> swap(vector<int>arr)
{
    int a=arr[0];
    int b=arr[1];
    a=a^b;
    b=a^b;
    a=a^b;
    vector<int> ansArr;
    ansArr.push_back(a);
    ansArr.push_back(b);
    return ansArr;
}
int main()
{
    vector<int> arr ={3,4};
    vector<int> ans=swap(arr);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
}
