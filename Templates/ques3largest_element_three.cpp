#include<iostream>
using namespace std;
template <class T>
T largest(T a,T b,T c)
{
    if(a>b)
    {
        if (a>c)
           return a;
        else 
            return c;
    }  
    else 
    {  if(b>c)
         return b;
       else
        return c; 
    }
}
int main()
{
    cout<<"Largest in intt = "<<largest<int>(4,2,5)<<endl;
    cout<<"Largest in float = "<<largest<float>(3.1,2.4,3.2)<<endl;
    return 0;
}