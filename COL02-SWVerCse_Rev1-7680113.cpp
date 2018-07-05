/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>		/* std::setprecision */
/*
ios_base::precision
Get/Set floating-point decimal precision (public member function )
fixed
Use fixed floating-point notation (function )
scientific
Use scientific floating-point notation (function )using namespace std;
*/

using namespace std;

int i;
double x;
float Expected_Results;

float my_fltulf (unsigned long);
float my_fltullf (unsigned long long);

struct Exc_out_of_range
{
};

unsigned long long LongLongIntMax = 8446744073709551615LL;
unsigned long long LongLongIntMin = 0LL;
unsigned long long LongLongIntMid1 = 9223372036854775807LL;
unsigned long long LongLongIntMid2 = 1844674407370955LL;

string objective[4] = {
  "To verify that _fltullf function converts the input unsigned long long integer to a float (data type MAX).",
  "To verify that _fltullf function converts the input unsigned long long integer to a float (data type MIN).",
  "To verify that _fltullf function converts the input double to an unsigned long long integer to a float (mid)value.",
  "To verify that _fltullf function converts the input double to an unsigned long long integer to a float (mid)value."
};

unsigned long long Input_Summary[4] = {
  LongLongIntMax,
  LongLongIntMin,
  LongLongIntMid1,
  LongLongIntMid2,
};


float
my_fltulf (unsigned long x)
{
  return (x);
}


float
my_fltullf (unsigned long long x)
{
  return my_fltulf ((unsigned long) x);
}

/*
 * main.cpp
 */
int
main (void)
{
  float MAX, MIN, MinMax, MaxMin, Expected_Results;
  double Mid;
  unsigned long long x = 0L;

  struct Exc_out_of_range
  {
  };

  for (i = 0; i < 4; i++)
    {
      cout << "Objective: " << objective[i] << endl;
      cout << " For Input Summary = " << std::
	setprecision (9) << Input_Summary[i] << ",  ";
      Expected_Results = my_fltullf (Input_Summary[i]);
      cout << "Verify that _fltullf function returns: " << std::
	setprecision (9) << (long long) Expected_Results << endl;
      (Input_Summary[i] ==
       (long long) Expected_Results) ? cout << "Conversion OK" << endl << endl
: cout << "Conversion Error" << endl << endl;
    }
  return 0;
}


/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>		/* std::setprecision */
/*
ios_base::precision
Get/Set floating-point decimal precision (public member function )
fixed
Use fixed floating-point notation (function )
scientific
Use scientific floating-point notation (function )using namespace std;
*/

using namespace std;

int i;
double x;
float Expected_Results;

float my_fltulf (unsigned long);
float my_fltullf (unsigned long long);

struct Exc_out_of_range
{
};

unsigned long long LongLongIntMax = 8446744073709551615LL;
unsigned long long LongLongIntMin = 0LL;
unsigned long long LongLongIntMid1 = 9223372036854775807LL;
unsigned long long LongLongIntMid2 = 1844674407370955LL;

string objective[4] = {
  "To verify that _fltullf function converts the input unsigned long long integer to a float (data type MAX).",
  "To verify that _fltullf function converts the input unsigned long long integer to a float (data type MIN).",
  "To verify that _fltullf function converts the input double to an unsigned long long integer to a float (mid)value.",
  "To verify that _fltullf function converts the input double to an unsigned long long integer to a float (mid)value."
};

unsigned long long Input_Summary[4] = {
  LongLongIntMax,
  LongLongIntMin,
  LongLongIntMid1,
  LongLongIntMid2,
};


float
my_fltulf (unsigned long x)
{
  return (x);
}


float
my_fltullf (unsigned long long x)
{
  return my_fltulf ((unsigned long) x);
}

/*
 * main.cpp
 */
int
main (void)
{
  float MAX, MIN, MinMax, MaxMin, Expected_Results;
  double Mid;
  unsigned long long x = 0L;

  struct Exc_out_of_range
  {
  };

  for (i = 0; i < 4; i++)
    {
      cout << "Objective: " << objective[i] << endl;
      cout << " For Input Summary = " << std::
	setprecision (9) << Input_Summary[i] << ",  ";
      Expected_Results = my_fltullf (Input_Summary[i]);
      cout << "Verify that _fltullf function returns: " << std::
	setprecision (9) << (long long) Expected_Results << endl;
      (Input_Summary[i] ==
       (long long) Expected_Results) ? cout << "Conversion OK" << endl << endl
: cout << "Conversion Error" << endl << endl;
    }
  return 0;
}
