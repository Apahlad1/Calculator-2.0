#include<iostream>
#include<cmath>
using namespace std;
void showMenu();
void standard();
void scientific();
void trig();

int main() /// INT MAIN MENU
{
  int letter;
  showMenu();
  cin >> letter;
    if (letter == 1)
  {
  	standard();
  }
  else if (letter == 2)
  {
  	scientific();
  }
  else if (letter == 3)
{
    trig();
}
  else (letter == 4);
{
	cout << " Please exit the program ";
}
 system("pause");
  return 0;
  }

void showMenu() /// DISPLAYS MENU
{
	int letter;
	cout << "\t************* CALCULATOR PROJECT 2.0 ************* \n";
	cout << "\n Please select the calculation that you want to perform :\n\n";
	cout << " \t 1.)  Standard Calculations: \n";
	cout << "\t     ------------------------\n" << endl;

		cout << "\t 2.) Scienitfic Calculations: \n";
	cout << "\t     ------------------------\n" << endl;

		cout << "\t3.) Trigonometric Calculations: \n";
	cout << "\t    ------------------------\n" << endl;
	cout << "\t 4.) Exit \n";

}

void standard() /// This is for Standard Calculations
{
	int letter;
	int letter1;
	double a,b;
	double result;
	cout << "Select a function \n 1.) Additon \n 2.) Subtraction \n 3.) Multiplication \n 4.) Division \n 5.) Return to calculation menu \n";
	cin >> letter1;
	if (letter1 == 1)
	{
		cout << "Enter two numbers\n";
		cin >> a;
		cin >> b;
		result = a + b;
		cout << "\nResult =" << result;
	}
	else if (letter1 == 2)
	{
		cout << "Enter two numbers\n";
		cin >> a;
		cin >> b;
		result = a - b;
		cout << "\nResult = " << result;
	}
	else if (letter1 == 3)
	{
		cout << "Enter two numbers\n";
		cin >> a;
		cin >> b;
		result = a * b;
		cout << "\nResult = " << result;
	}
	else if (letter1 == 4)
	{
		cout << " Enter two numbers\n";
		cin >> a;
		cin >> b;
		result = a / b;
		cout << "\nResult = \n" << result;
	}
	else if (letter1 == 5)
	{
	showMenu();
    cin >> letter;
    if (letter == 1)
    {
  	standard();
    } 
  else if (letter == 2)
  {
  	scientific();
  }
  else if (letter == 3)
{
    trig();
}
  else if (letter == 4)
{
	cout << " Please exit the program ";
}
}
 else (letter1 != 1 && letter1 != 2 && letter1 != 3 && letter1 != 4 && letter1 != 5 && letter1 > 5 && letter1 < 1) ;
	{
		cout << "\n\nYou may try again by inserting\nyour choice of standard functions\nor return to the calculation menus \n";
		standard();
		cin >> letter1;
	}
}




void scientific()  /// This is for scientific calculations
{
	int letter;
	int letter2;
	double a1,b1;
	double result1;
	cout << " 1.) Power of Number \n 2.) Square Root \n 3.) Return to Calculation Menu\n";
	cin >> letter2;
	if (letter2 == 1)
	{
		cout << " Enter a two numbers, a number and the power";
		cin >> a1;
		cin >> b1;
		result1 = pow (a1,b1);
		cout << "\nResult = " << result1;
	}
	else if (letter2 == 2)
	{
		cout << "\nEnter a number that you want the square root of\n";
		cin >> a1;
		result1 = sqrt (a1);
		cout << "\nResult = \n" << result1;
	}
	else if (letter2 == 3)
	{
		showMenu();
		 cin >> letter;
    if (letter == 1)
  {
  	standard();
  }
  else if (letter == 2)
  {
  	scientific();
  }
  else if (letter == 3)
{
    trig();
}
  else if (letter == 4)
{
	cout << " Please exit the program ";
}
}
	
	else  (letter2 != 1 && letter2 != 2 && letter2 != 3 && letter2 > 2 && letter2 < 1);
	{
			cout << "\n\nYou may try again by inserting\nyour choice of scientific functions\nor return to the calculation menus \n";
		cin >> letter2;
		scientific();
	}
}


void trig() /// This is for trigonometric calculations
{
	int letter;
	int letter3;
	double a2;
	double result2;
	cout << " 1.) Sine Function \n 2.) Cosine Function \n 3.) Tangent Function \n 4.) Log With Base of 10 \n 5.) Natural Log \n 6.) Return to Calculation Menu\n";
	cin >> letter3;
	if (letter3 == 1)
	{
		cout << "\nEnter a number you want to find the sine of\n";
		cin >> a2;
		result2=(sin(a2));
		cout << " Result = " << result2;
	}
	else if (letter3 == 2)
	{
			cout << "\nEnter a number you want to find the cosine of\n";
		cin >> a2;
		result2=(cos(a2));
		cout << " Result = " << result2;
	}
	else if (letter3 == 3)
	{
		cout << "\nEnter a number you want to find the tangent of\n";
		cin >> a2;
		result2=(tan(a2));
		cout << " Result = " << result2;
	}
	else if (letter3 == 4)
	{
		cout<<"\n\n Enter a number...";
     cin>>a2;
            result2= log10(a2);
     cout<<"\n\n Result = "<<result2<<endl;
	}
	else if (letter3 == 5)
	{
		cout<<"\n\n Enter a number...";
     cin>>a2;
    result2 = log(a2);
     cout<<"\n\n Result = \n"<< result2 <<endl;
	}
	else if (letter3 == 6) /// Returns to ShowMenu
	{
		showMenu();
		 cin >> letter;
    if (letter == 1)
  {
  	standard();
  }
  else if (letter == 2)
  {
  	scientific();
  }
  else if (letter == 3)
{
    trig();
}
  else if (letter == 4)
{
	cout << " Please exit the program ";
}
}
	
else(letter3 != 1 && letter3 != 2 && letter3 != 3 && letter3 != 4 && letter3 != 5 && letter3 != 6 && letter3 > 6 && letter3 < 1);
{
 cout << "\n\nYou may try again by inserting\nyour choice of trigonometric functions\nor return to the calculation menus \n";
trig();
}
	
}

