#include <iostream>
#include <stdio.h>
#include <climits>
using namespace std;
int main()
{
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int length = sizeof(arr)/sizeof(arr[0]);
    
    int sum = 0 , max_sum = INT_MIN;
    
    for(int i = 0;i<length;i++)
    {
        sum +=arr[i];
        if(sum <=0)
        {
            sum = 0;
            max_sum = 0;
        }
        if(sum >max_sum)
            max_sum = sum;
    }
    cout<<max_sum<<endl;
    return 0;
}
