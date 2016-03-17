// A simple program that computes the square root of a number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char *argv[])
{
  if (argc < 2)
  {
	fprintf(stdout,"Usage: %s number\n",argv[0]);
    return 1;
  }
  
  const double inputValue = atof(argv[1]);
  double sqrt_root_tValue = sqrt(inputValue);
  double sqrt_value = inputValue * inputValue;
  
  fprintf(stdout,"The square root of the number : %g is: %g\n",
          inputValue, sqrt_root_tValue);
  
  fprintf(stdout,"The square of the number : %g is: %g\n",
          inputValue, sqrt_value);
  
  return 0;
}

