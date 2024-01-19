#include <iostream>
#include <unistd.h>

using namespace std;

// function for withdrwaing money

void cashWithdrawl(double currentBalance)
{
   double
      withdraw;
   cout << "\nPlease enter the amount you would like to withdraw.\n\n";
   cin >> withdraw;
   
   currentBalance = currentBalance - withdraw;
   
   cout << "\nTask completed sucessfully.\n"
   "Your account has $"<< currentBalance << endl;
}

//function for adding money

void cashDeposit(double currentBalance)
{
   double
      deposit;
     
   cout << "\nPlease enter the amount you would like to deposit\n\n";
   cin >> deposit;
   
   currentBalance = currentBalance + deposit;
   
   cout << "\nTask completed sucessfully.\n"
   "Your account has $"<< currentBalance << endl;
}

// function for details of the user
// need to return current balance

void accountDetail(int currentBalance)
{
   int
      accountNumber = 23456789;
     
   string name = "John Doe";
   
   cout << "Bank account holder: " << name << endl
   << "Account number: " << accountNumber << endl
   << "Current Balance: $" << currentBalance << endl;
   
}

int balance()
{
    double
      currentBalance = 8000;
     
    return currentBalance;
}

int main()
{
   //Welcoming the user
   int
     pin,
     operationOption;               //Stores user's chosice for operation.
     
   bool
     condition = 1;                // For infinite loops
     
   //double
     //returnCurrentBalance;          //For pass by reference
     
   //returnCurrentBalance = balance();
   
   cout << "Welcome\n\n";
   sleep(1);
   
   cout << "Please insert your card\n\n";
   sleep(1);
   
   cout << "Please enter your PIN.\n";
   
   cin >> pin;
   
   //Considering the pin is 1111.
   //Providing 3 tries before terminating.
   
   if (pin != 1111)
   {
   for (int i = 0; i < 3; i++)
   {
          if (i == 2)
          {
             cout << "\nYou entered Incorrect PIN 3 times.\n";
             sleep (1);
             cout << "Please try agian later\n";
             exit (0);
          }
         
          cout << "\nIncorrect PIN.\n"
          "Please try again.\n";
         
          cin >> pin;
   }
   }
   // Allowing user to choose
   cout << "\nPlease enter one of the following option:\n"
   "1) Cash Withdrwal\n"
   "2) Deposit Cash\n"
   "3) Account Information\n\n";
   
   //infinite loop until user enters a valid input
   while (condition)
   {
      cin >> operationOption;
   
      if(operationOption > 3 || operationOption < 1)
      {
         cout << "\nInvalid Input\n"
         "Please Try again.\n\n";
      }
      else
      {
         break;
      }
   }
   
   // Usnig switch and calling the enterd function.
   
   
   switch (operationOption)
   {
      case 1: cashWithdrawl(balance());
              break;
                 
      case 2: cashDeposit(balance());
              break;
             
      case 3: accountDetail(balance());
              break;
   }

   return 0;
}