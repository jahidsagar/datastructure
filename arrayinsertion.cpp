#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    cout<<"enter the range\n";
    int range,i;
    cin>>range;
    ++range;
    int arr[range];
    cout<<"enter the value\n";
    for(i = 0;i<range-1;i++)
    {
        cin>>arr[i];
    }
    cout<<"ur values are ...\n";
    for(i = 0;i<range-1;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"which position u want to insert?\n";
    int position;
    cin>>position;
    --position;
    for(i = range-1;i>position;i--)
    {
        arr[i]= arr[i-1];
    }
    cout<<"enter ur value : ";
    int value ;
    cin>>value;
    arr[position] = value;
    cout<<"\nnow ur array is \n";
    for(i = 0;i<range;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
