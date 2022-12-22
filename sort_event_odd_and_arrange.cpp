// problem :   Input: arr[] = {1, 2, 3, 5, 4, 7, 10}
//             Output: arr[] = {7, 5, 3, 1, 2, 4, 10}

//             Input: arr[] = {0, 4, 5, 3, 7, 2, 1}
 
//             Output: arr[] = {7, 5, 3, 1, 0, 2, 4} 

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[] = { 5,2,4,8,13,67,55,44,88,33,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    int l ,r,oCount;

    l=0;
    r=n-1;
    while(l<r){
        while (arr[l]%2 != 0 && l<r)
        {
            l++;
            oCount++;
        }
        while(arr[r]%2 == 0 && l<r){
            r--;
        }
        if(l<r){
            swap(arr[l],arr[r]);
        }
    }
        sort(arr,arr + oCount,greater<int>());
        // sort(arr,arr + oCount);
        sort(arr + oCount,arr+n);
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<' ';
    }
return 0;

}