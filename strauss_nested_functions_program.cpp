//****************************
//Linda Strauss
//14APR16
//V4.0
//nested functions assignment
//using nested functions the program takes a number and determines whether the number is positive or negative and odd or even
//****************************
#include <iostream>
using namespace std;

int enterThenumber () //first function to take input from user

{
int number;

cout << "Please enter a number" << endl;
cin >> number;

}

int analyzeThenumber () //second function to actually analyze the cin and determine the odd/even neg/pos status of it
{
    int number;
if (number >= 0 && number % 2== 0)
{
cout << number << " is positive and even!" << endl;
}

else if (number <= 0 && number % 2== 0)
{
cout << number << " is negative and even!" << endl;
}

else if (number <= 0 && number % 2!= 0)
{
cout << number << " is negative and odd!" << endl;
}

else if (number >= 0 && number % 2 != 0)
{
cout << number << " is positive and odd!" << endl;
}

else
{
cout << "Oops, look like something went wrong, make sure to enter just one number" << endl;
} //used else if statements so the information displays on one line

}
int main ()
{

char ans;
do
{

enterThenumber ();
analyzeThenumber ();

cout << "Would You like to look up another number? (Please Type Y or N)\n ";
        cin >> ans;
}
while (ans == 'Y' || ans == 'y');

cout << "thanks!" << endl;
return 0;

}
