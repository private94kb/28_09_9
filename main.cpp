#include <algorithm> 

#include <iostream> 

#include <cmath> 

using namespace std; 


int main(){ 

      int a,b,c,d; 

      cout << "input a: "; 

      cin>>a; 

       cout << "input b: "; 

      cin>>b; 

       cout << "input c: "; 

      cin>>c; 

       cout << "input d: "; 

      cin>>d; 

    // Перевіряємо кожне число на діапазон [0;255]

      if(a<0){

        cout<<"error"; 

        return 0; 

      } else if(a>255){

        cout<<"error";   

        return 0; 

      } 

      if(b<0){ 

        cout<<"error";   

        return 0; 

      } else if(b>255){ 

        cout<<"error";  

        return 0; 

      } 

      if(c<0){ 

        cout<<"error";  

        return 0; 

      } else if(c>255){ 

        cout<<"error";   

        return 0; 

      } 

      if(d<0){ 

        cout<<"error";   

        return 0; 

      } else if(d>255){ 

        cout<<"error";   

        return 0; 

      } 

      cout<<"IP number is: "<<a<<"."<<b<<"."<<c<<"."<<d; 

      return 0; 

} 