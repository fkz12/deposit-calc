#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int S, D, flag;
int CorF (int, int);
int DayF (int, int);

int main()
{
    
     cout << "Deposit amount: ";
         cin >> S;     
     cout << "Amount of days: ";
         cin >> D;
         
         CorF (S, D);
         
         if (flag!=1)
         DayF (S,D);
       
         cout << endl;
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
           
    int DayF (int, int)
{
        if (S<100000)
        {
        if (D > -1 && D <= 30)
           cout << "Income= " << S*0.9;
        if (D > 30 && D <= 120)
             cout << "Income= " << S*1.02;
        if (D > 120 && D <= 240)
            cout << "Income= " << S*1.06;
        if (D > 241 && D <= 365)
            cout << "Income= " << S*1.12;
        }
        else
        {
        if (D > -1 && D <= 30)
            cout<< "Income= " << S*0.9;
        if (D > 30 && D <= 120)
             cout<< "Income= " << S*1.03;
        if (D > 120 && D <= 240)
             cout<< "Income= " << S*1.08;
        if (D > 241 & D <= 365)
            cout<< "Income= " << S*1.15;
        }
}

