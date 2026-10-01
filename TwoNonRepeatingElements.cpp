#include <iostream>
#include <vector>
using namespace std;
int findFirstSetBitPosition(int n)
{
    int pos = 0;
    while (n != 0)
    {
        if ((n & 1) == 1)
        {
            return pos;
        }
        else
        {
            pos++;
            n = n >> 1;
        }
    }
    return pos;
}
int findMatchBitSetPoistion(int n, int desiredPos)
{
    int resPos = 0;
    while (n != 0)
    {
        if ((n & 1) == 1 && (resPos == desiredPos))
        {
            return true;
        }
            resPos++;
            n = n >> 1;
    }
    return false;
}
vector<int> matchSetBit(vector<int> &arr, int k)
{
    cout << "numbers" << endl;
    vector<int> res;
    for (int i = 0; i < arr.size(); i++)
    {

        if (findMatchBitSetPoistion(arr[i], k))
        {
            cout << arr[i] << endl;
            res.push_back(arr[i]);
        }
    }
    cout << "numbers end" << endl;
    return res;
}
int findNonRepeatingElement(vector<int> &arr, int xorProduct)
{
    int resNum = xorProduct;
    for (int i = 0; i < arr.size(); i++)
    {
        resNum = resNum ^ arr[i];
    }
    return resNum;
}
void findTwoNonRepeatingElements(vector<int> &arr)
{
    int res = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        res = res ^ arr[i];
    }
    cout << res << endl;
    int n = res;
    int firstSetBitPos = findFirstSetBitPosition(n);
    cout << firstSetBitPos << endl;
    vector<int> resArr = matchSetBit(arr, firstSetBitPos);
    int firstNonRepeatingNumber=findNonRepeatingElement(resArr,n);
    int secondNonRepeatingNumber=res^firstNonRepeatingNumber;
    cout<<firstNonRepeatingNumber<<" "<<secondNonRepeatingNumber<<endl;
}
int main()
{
    vector<int> arr = {100, 1, 2, 100, 2, 99, 1, 3};
    findTwoNonRepeatingElements(arr);
}