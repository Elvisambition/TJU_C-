#include <iostream.h> 
class B{ 
private: 
    int a, b; 
public: 
//    B(){
//       a=2; b=5; 
//      cout<<"B class(a=2,b=5)\n";
//   }  
    B(int i,int j){
      a=i; b=j;
      cout<<"B class(a="<<a
             <<",b="<<b<<")\n"; 
    }
    void print(){
       cout<<" a="<<a<<" b="
              <<b<<endl; 
    }  
}; 
void main()
{
	B a(3,5);
	B b;
}