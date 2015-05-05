// question 1
#include <iostream>
using namespace std ;

int main()
{
  int selection , cost_per_hour , rent_weeks , minimum_weeks =1 , weekend ,rent , hours ;
  char custom = 3; 
  cout << "To rent a car you would be able to pay $3 (or more) per hour, rent it for more than 1 week and less than 4 hours per day" << endl;
  cout << "enter hours , rent_weeks , cost_per_hour simultaneously )" << endl ;
  cin >> hours >> rent_weeks >> cost_per_hour ;
  if ( cost_per_hour >= custom )
  {
    if ( rent_weeks >= minimum_weeks )
    {
      if ( hours <= 4 )
      {
        rent = cost_per_hour*hours*7*rent_weeks ;
        cout << " rent amount is : " << rent << endl ;
      }
    } 
  } else {
    cout << " get out from my house " << endl ; 
  }
  return 0 ;
}