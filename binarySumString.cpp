#include <iostream>
using namespace std;
string convertToBinaryString(int n)
{
    string s="";
    while(n!=0)
    {
        if((n&1)==0)
        {
            s="0"+s;
        }
        else
        {
            s="1"+s;
        }
        n=n>>1;
    }
    return s;
}
int decimalSumOfBinaryForms(int numA, int numB)
{
    int res=0;
    int i=0;
    while(numA!=0 || numB!=0)
    {
        int s=(numA&1)+(numB&1);
        res=res+(s*pow(2,i));
        i++;
        numA=numA>>1;
        numB=numB>>1;
    }
    return res;
}
int main()
{
    string a="10";
    string b="01";
    int numA=stoi(a,nullptr,2);
    int numB=stoi(b,nullptr,2);
    cout<<convertToBinaryString(decimalSumOfBinaryForms(numA,numB))<<endl;
}