#include "mylibrary.h"

int factorial(int n)
{
	unsigned int result = 1;

	//TODO: factorial of n (n! = 1*2*...*n)
  for(int i=1; i<=n; i++){
    result *= i; // update the result for every increment
  }
	return result;
}

int sum_of_odd_numbers(int *array, int count)
{
	int sum = 0;
	for (int i=0; i<count; ++i)
	{
		//TODO: only add odd numbers, e.g., 3. Skip even numbers, e.g., 4
    if(array[i]%2 != 0){ // check if the current number is odd
		  sum += array[i]; // if odd, add to the sum
    }
	}
	return sum;
}

int min_of_numbers(int *array, int count)
{
	//TODO: return the minimum number from the array
  int min = array[0];
  for(int i=0; i<count; i++){ // check every element in the array
    if(array[i] < min){ // check if current number less than previous 
      min = array[i]; // assign it to min
    }
  }
	return min;
}

int reversed_number(int number)
{
	//TODO: if input is 12345, return 54321
	
	int reversed = 0;
  while(number != 0){
    reversed *= 10; // this operation is for digit slicing
    reversed += number%10; // update the reversed number with the last digit of given number
    number /= 10; // remove last digit of given number to check next digit 
  }

	return reversed;
}


char alphabet_index(int index)
{
	//TODO: for index 0, return 'a'. index 1, 'b', etc. until 25 for 'z'.
	//if index is out of range, return space ' '.
  char letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}; // initialize the letters in an array
  if(index <= 25) // check index
	  return letters[index];
  return ' ';
}

