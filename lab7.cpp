#include <iostream>
#include <time.h>
using namespace std;

int main ()
{
srand (time (NULL));
int money;
money = 500;
cout << "Balance amount:" << money << endl;

     while (money>0)
    {    
      int number;  
      cout << "Choose your number \n" << endl;
      cin >> number;  

         if(number==0 || number==1)
          {
              int betamount;
              cout << "Enter your betamount:";
              cin >> betamount;
              
             if (money>=betamount && betamount>0)
             {
                int random = rand() %2;
                  
                cout << "You got "<< random << endl;
                if (random==number)
                {
                    cout << "You Win" << endl;
                    money= (money-betamount) + betamount*2;
                    cout << "You total balance amount " << money << endl;
                }  else 
                {
                    cout << "you lose " << endl;
                    money = money - betamount;
                    cout << "You total balance amount " << money << endl;

                }
                

             } else 
               {
                  if(betamount<=0)
                  {
                      cout << "\n  NO cash" << betamount << endl;
                      break;
                  }

                  cout << "Not enough money"<< endl;
                  break;
               }



          } else {
               cout << " Cashing out " << endl;
              break;
          }
          
           
           

    }


}