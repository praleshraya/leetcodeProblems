
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

if(temp==reverse)
{
    cout << temp <<" is palindrome number." << endl;
}
else{
     cout << temp <<" is not a palindrome number." << endl;
}

return 0;

}