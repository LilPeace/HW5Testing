#include <iostream>

using namespace std;

int main() {

string Racer1;
string Racer2;
string Racer3;
float Racer1Time;
float Racer2Time;
float Racer3Time;

cout << "Name 1:";
cin >> Racer1;
cout << "Name 2:";
cin >> Racer2;
cout << "Name 3:";
cin >> Racer3;

cout << "Time 1:";
cin >> Racer1Time;
cout << "Time 2:";
cin >> Racer2Time;
cout << "Time 3:";
cin >> Racer3Time;

//Racer1 Win
if (Racer1Time < Racer2Time)
  {
  if (Racer1Time < Racer3Time)
  cout << "Congratulations " << Racer1 << "!! You are the winner!!\n"
       << "***** Your winning time is: " << Racer1Time << " *****";
  
//Racer2 Win
else if (Racer2Time < Racer3Time)
  {
  if (Racer2Time < Racer1Time)
  cout << "Congrats! " << Racer2 << ", you are the winner!";
  }
  
//Racer3 Win  
else if (Racer3Time < Racer2Time)
  {
  if (Racer3Time < Racer1Time)
  cout << "Congrats! " << Racer3 << ", you are the winner!";
  }
  
//Racer 1 & 2 TIE
if (Racer1Time == Racer2Time)
  {
  if (Racer1Time != Racer3Time)
  cout << "We have a TIE! " << Racer1 << " & " << Racer2 << " win!\n";
  }

//Racer 2 & 3 TIE
else if (Racer2Time == Racer3Time)
  {
  if (Racer2Time != Racer1Time)
  cout << "We have a TIE! " << Racer2 << " & " << Racer3 << "    win!\n";
  }

}
}  