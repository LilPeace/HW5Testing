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
  do
    {
      cout << "Congrats! " << Racer1 << ", you are the winner!";
      break;
    }while (Racer1Time < Racer3Time);

//Racer2 Win
else if (Racer2Time < Racer3Time)
  do
    {
      cout << "Congrats! " << Racer2 << ", you are the winner!";
      break;
    }while (Racer2Time < Racer1Time);

//Racer3 Win  
else if (Racer3Time < Racer2Time)
  do
    {
      cout << "Congrats! " << Racer3 << ", you are the winner!";
      break;
    }while (Racer3Time < Racer1Time);

//Racer 1 & 2 TIE
else if (Racer1Time == Racer2Time)
  do
    {
      cout << "We have a TIE! " << Racer1 << " & " << Racer2 << " win!\n";
      break;
    }while (Racer1Time != Racer3Time);

//Racer 2 & 3 TIE
else if (Racer2Time == Racer3Time)
  do
    {
      cout << "We have a TIE! " << Racer2 << " & " << Racer3 << " win!\n";
      break;
    }while (Racer2Time != Racer1Time);

//Racer 1 & 3 TIE
else if (Racer1Time == Racer3Time)
    do
      {
        cout << "We have a TIE! " << Racer1 << " & " << Racer3 << " win!\n";
        break;
      }while (Racer1Time != Racer2Time);
  
}