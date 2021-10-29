//finding the greatest among three number
#include <iostream>

using namespace std;

int main()
{
    float num1,num2,num3;
    cout<<"enter three numbers";
    cin>>num1>>num2>>num3;
    if(num1>=num2 && num1>=num3)
      cout<<"the greatest number is :"<<num1;
    if(num2>=num1 && num2>=num3)
      cout<<"the greatest number is :"<<num2;
    if(num3>=num1 && num3>=num2)  
      cout<<"the greatest number is :"<<num3;
      
    return 0;
}
