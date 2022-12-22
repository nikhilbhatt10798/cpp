#include <iostream>
using namespace std;
int linearSearch(int A[],int key,int  n){
    for (int i = 0; i < n; i++)
    {
        if(key==A[i]){  
            return i;
        }
    }
        return n+1;  
}
int main(){
    int key;
    int index;
    int A[]={10,20,30,17,11,6,2}; 
    cout<<"Enter number for search = ";
    cin>>key;
   index = linearSearch(A,key,7);
   if (index==7+1){
    cout<< "Not Found";
   }else{
   cout<<"No. found at index = "<<index;
   }
} 