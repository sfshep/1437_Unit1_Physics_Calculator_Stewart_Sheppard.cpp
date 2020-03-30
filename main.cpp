/* Stewart Sheppard
   COSC 1437-58000
   Text Editor: Repl.it
A decision program menu to help students who are taking a Physics
(Mechanics) class perform simple foundation calculations.*/
#include <iostream>
#include <iomanip>
//#include <stdtlib>
using namespace std;


//function prototype
double velocity(); 


int main() 
{
  char selection;

 

cout << "\n Menu";

cout << "\n========";

cout << "\n V - Velocity";

cout << "\n A - Acceleration";

cout << "\n M - Motion";

cout << "\n N - Newton’s Second Law ";

cout << "\n W - Weight";

cout << "\n P - Momentum";

cout <<"\n Enter selection: ";

// read the input

cin>>selection;

 

switch(selection)

{

case 'V' :

case 'v' :{double velocity;}

break;

case 'A' :

case 'a' :{cout <<"\n Acceleration";}

break;

case 'M' :

case 'm' :{cout <<"\n Motion";}

break;

case 'N' :

case 'n' :{cout <<"\n Newton";}

break;

case 'W' :

case 'w' :{cout <<"\n Weight";}

break;

case 'P' :

case 'p' :{cout <<"\n Momentum";}

break;

case 'X' :

case 'x' :{cout <<"\n To exit the menu";}

break;



default : cout<<"\n Invalid selection";

// no break in the default case

}

cout<<"\n";



return 0;

}

// Velocity Function
double velocity ()
{
        //Input
        double ds; 
        string dsUnits;
        double dt;
        string dtUnits;
        cout << "\n To determine the Velocity: \n";
        cout << "\n Please enter in the ds Units \n";
        cin >> ds;
        cout << "\n Please enter the dt \n";
        cin >> dt;
        cout << "\n You entered" << ds << "for ds Units \n";
        cout << " and " << dt <<   "for dt Units \n";

        //Process
        double v  = ds / dt;

        //Output:

        cout << v << dsUnits << "/" << dtUnits << endl;  
  return 0;
}