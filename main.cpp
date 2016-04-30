//****************************
//Melanie Walker
//April 30 2016
//V4.0
//nested functions assignment
//nested functions the program takes a number and determines whether the number is positive or negative and odd or even
//****************************
#include <iostream>
using namespace std;

int enternumber () //function to take input from user

{
int number;

cout << "Please enter a number" << endl;
cin >> number;



int analyzeThenumber (); //second function to  analyze the cin and determine the odd/even neg/pos 
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
cout << "Oops, looks like something went wrong, make sure to enter just one number" << endl;
} //used else if statements so the information displays on one line


int main ()
{

char ans;
do
{

enternumber ();
analyzeThenumber ();

cout << "Would You like to look up another number? (Please Type Y or N)\n ";
        cin >> ans;
}
while (ans == 'Y' || ans == 'y');

cout << "thanks!" << endl;
return 0;
}


