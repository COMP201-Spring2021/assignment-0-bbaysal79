#include "mylibrary.h"

int factorial(int n)
{
	unsigned int result = 1;

	//TODO: factorial of n (n! = 1*2*...*n)
  for(int i=1; i<=n; i++){
    result *= i;
  }
	return result;
}

int sum_of_odd_numbers(int *array, int count)
{
	int sum = 0;
	for (int i=0; i<count; ++i)
	{
		//TODO: only add odd numbers, e.g., 3. Skip even numbers, e.g., 4
    if(array[i]%2 != 0){
		  sum += array[i];
    }
	}
	return sum;
}

int min_of_numbers(int *array, int count)
{
	//TODO: return the minimum number from the array
  int min = array[0];
  for(int i=0; i<count; i++){
    if(array[i] < min){
      min = array[i];
    }
  }
	return min;
}

int reversed_number(int number)
{
	//TODO: if input is 12345, return 54321
	
	int reversed = 0;
  while(number != 0){
    reversed *= 10;
    reversed += number%10;
    number /= 10;
  }

	return reversed;
}


char alphabet_index(int index)
{
	//TODO: for index 0, return 'a'. index 1, 'b', etc. until 25 for 'z'.
	//if index is out of range, return space ' '.
	return 'a';
}

