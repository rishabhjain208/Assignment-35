#include<iostream>
using namespace std;
template <class T>
T largest(T a,T b)
{
    return (a > b)?a:b;
}
int main()
{
    cout<<"Largest in int = "<<largest<int>(3,2)<<endl;
    cout<<"Largest in float = "<<largest<float>(3.3,2.4)<<endl;
    return 0;
}