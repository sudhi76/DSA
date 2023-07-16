
// C++ program to find second largest element in an array
 
#include <bits/stdc++.h>
using namespace std;


void secondLargest(int arr[], int n){
    if(n<2){
        return;
    }

    //sort array
    sort(arr,arr+n);
    for(int i=n-2; i>0; i--){
        if(arr[i]!=arr[n-1]){
            printf("%d",arr[i]);
            return;
        }
    }
    return;
}


int main()
{
    int arr[] = { 12, 35, 1, 10, 34, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    secondLargest(arr, n);
    return 0;
}