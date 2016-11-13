#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int k , i;
    cout<<"enter ur array length \n";
    cin>>k;
    int arr[k];
    cout<<"enter ur value\n";
    for(i = 0;i<k;i++)
    {
        cin>>arr[i];
    }
    for (i = 0; i < k-1; i++)
    {
        for (int j = i+1; j < k-i; j++)
          if (arr[j] < arr[i])
          {
              int temp = arr[j];
              arr[j] = arr[i];
              arr[i] = temp;
          }
    }
    cout<<"\nur array is ...\n";
    for(i = 0;i<k;i++)
        cout<<arr[i]<<" ";

    return 0;
}
