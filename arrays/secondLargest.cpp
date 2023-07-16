
// C++ program to find second largest element in an array
 
#include <bits/stdc++.h>
using namespace std;

//brute approch o(nlog n)
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

//optimized approach O(N)

int secondLargest(int arr[], int n){
    int first = 0, second = -1;
    
    for(int i=1; i<n; i++){
        if(arr[i]>arr[first]){
            second = first;
            first = i;
        }
        else if (arr[i]<arr[first]){
            if(second = -1 || arr[second]<arr[i]){
                second = i;
            }
        }
    }
    return second;
}


int main()
{
    int arr[] = { 12, 35, 1, 10, 34, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    secondLargest(arr, n);
    return 0;
}