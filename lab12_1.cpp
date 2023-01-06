#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int roll;
string grade;

int main()
{
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    roll = rand()%9+1;
    if (roll==1) grade = "A"; 
    else if (roll==2) grade = "B+"; 
    else if (roll==3) grade = "B"; 
    else if (roll==4) grade = "C+"; 
    else if (roll==5) grade = "C"; 
    else if (roll==6) grade = "D+"; 
    else if (roll==7) grade = "D"; 
    else if (roll==8) grade = "F"; 
    else grade = "W"; 

    cout << "You will get "<< grade << " in this 261102.";
    return 0;
}