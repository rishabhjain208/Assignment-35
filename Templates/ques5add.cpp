#include<iostream>
using namespace std;
template <class T>
T add(T a,T b)
{
    return (a+b);
}
int main()
{
    int sum2 = add<int>(3,4);
    //cout<<"Sum of Float data type = "<<sum1<<endl;
    cout<<"Sum of int data type = "<<sum2<<endl;
    return 0;
}