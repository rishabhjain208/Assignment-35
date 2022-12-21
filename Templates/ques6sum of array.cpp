#include<iostream>
using namespace std;
template <class T>
void addArray()
{
    T i;
    int count;
    T arr[100];
    T sum = 0;
    cout<<"Enter the length of Array = ";
    cin>>count;
    cout<<"Enter the "<<count<<" Element in the Array "<<endl;
    for ( i = 0; i < count; i++)
    {
        cin>>arr[i];
    }
    cout<<"Your Entered Elemnts "<<endl;
    for ( i = 0; i < count; i++)
    {
        cout<<arr[i]<<" ";
    }    
    for ( i = 0; i < count; i++)
    {
        sum = sum+arr[i];
        //cout>>arr[i];
    }
    cout<<endl<<"Sum of "<<count<<" Element in the Array = "<<sum;

}
int main()
{
    addArray<int>();
    return 0;
}