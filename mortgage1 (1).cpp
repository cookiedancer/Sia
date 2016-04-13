//**************************************************
//Mortgage calculator program
//This program determines the monthly payments on a //mortgage given the loan amount, the yearly interest rate, and the number of years
#include <fstream>
#include <cmath>
#include <iomanip>
Using namespace std;
Int main()
{
//Input variables
Float loanAmount;
Float YearlyInterest;
Int numberOfYears;
Ofstream outData;
Ifstream inData;
//local variables
Float monthlyInterest;
Int numberOfPayments;
Float payment;
//open files
inData.open(“loan.in”);
outData.open(“loan.out”);
//Read Values
inData>>loanAmount>>yearlyInterest>>numberOfYears;
//calculate values
monthlyInterest=yearlyInterest/12;
numberOfPayments=numberOfYears*12;
payment=(loanAmount*pow(1+monthlyInterest,numberOfPayments)*monthlyInterest/
(pow(1+monthlyInterest,numberOfPayments)-1);

//output results
outData<<fixed<<loanAmount:     “<<setprecision(2)
<<loanAmount<<endl;<<”Interest rate;  “
<<setprecision(4)<<yearlyInterest<<endl;
<<numberOfYears:”<<numberOfYears<<endl;
outData<<fixed
<<”Monthly payment: “<<setprecision(2)<<payment<<endl;

//close files
inData.close();
outData.close();
return 0;
}
