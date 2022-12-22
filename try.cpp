// 2
// 3 4
// 5 6 7
// 7 8 9 10
// 11 12 13 14 15
// 13 14 15 16 17 18
// 17 18 19 20 21 22 23 
// how to print above pattern
#include <iostream>
using namespace std;
bool isPrime(int n){
   int count=0 ; 
   for(int i =1 ;i <=n;i++){
    if(n%i==0){
      count++;
    }
   }
   if(count==2){
    return true;
   }else{
   return false;
   }
}

int main() 
{
  int n=2;
   for(int i = 1 ; i <=7;i++){
    int prime = n;
      if(isPrime(n)){
        for(int j =0 ; j<i;j++){
          cout<<prime<<" ";
          prime++;
        }
        cout<<endl;
     
    }
     n++;
       if(!isPrime(n)){
        i--;
       }
  }
      
}




      

    
