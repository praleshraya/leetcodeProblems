
// code to reverse an integer.

#include <iostream>
using namespace std;
int main()
{

int num,temp, reverse=0;
cout << "Enter element:";
cin >>  num;
temp=num;
while(num!=0)
{
    int digit = num%10;
    reverse = reverse*10+digit;
    num =num/10;
    
}

cout <<"Reverse number of " << temp << " is : " << reverse  ;
return 0;

}