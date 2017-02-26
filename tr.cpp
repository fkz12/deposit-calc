#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int S, D, flag;
int CorF (int, int);

int main()
{
    
     cout << "Deposit amount: ";
         cin >> S;     
     cout << "Amount of days: ";
         cin >> D;
         
         CorF (S, D);
         
         system ("PAUSE");
         
}

       int CorF (int, int)
           { 
            if ((S<10000) || ((D<-1) || (D>365))) 
            {
            flag=1;
            system("cls");
            cout << "The entered data is not correct!" << endl << "Check the entered data!" << endl << "The contribution rate of 10 thousand rubles and up to 365 days!" << endl;
            }
           }         
           
