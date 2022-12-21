#include<iostream>
using namespace std;
template <class T>
void swap(T *a,T *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main()
{
    int a,b;
    cout<<"Enter the value of a = ";
    cin>>a;
    cout<<"Enter the value of b = ";
    cin>>b;
    swap<int>(&a,&b);
    cout<<"Value of a = "<<a<<endl;
    cout<<"Value of b = "<<b<<endl;


    return 0;
}