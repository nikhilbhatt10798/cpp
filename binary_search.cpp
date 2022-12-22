#include <iostream>
#include <stdio.h>
using namespace std;
 int main(){
    int h,l,mid,key;
    int a[] = { 2,5,7,13,35,45,46,47,55,57 };
    for (int i = 0 ; i < size(a); i++){
        cout << a[i]<<" ";
    }
    cout<< endl <<"enter key =";
    cin>>key;
        h = size(a) - 1 ;
        l = 0 ;
       
     while(l<=h){ 
        mid = (l+h)/2;
        if(key==a[mid]){
            cout<<"search result is found at index = "<<mid;
            exit(0);
        }
        else if(key < a[mid]){
            h=mid-1;
        }
        else if(key > a[mid]){
            l=mid+1;
        }
     }
     cout <<"Not Found ";

    return 0;
 }
