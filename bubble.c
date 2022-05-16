//bubble.c
//famous bubble sort
//implement the swap algorithm with pointers

#include <stdio.h>
#define MAX 9

//input to work with
int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

//function prototypes
void printValues();
void sort();
void swap(int*, int*);

//main function
int main(){
  printf("Before: \n");
  printValues();
  sort();
  printf("After: \n");
  printValues();
  
  return(0);
} //end main

//functions
void printValues(){
  //print the values array
  printf("[");

  int index; 
  for(index = 0; index < MAX; index++){
    printf(" %d", values[index]);
  } //end for
  
  printf(" ]\n");
} //end printValues

void swap(int* high, int* low){
  //switch the values at two pointers
  //let holdValue get high's value, let high get low's value, let low get high's value
  int holdValue = *high; 
  *high = *low;
  *low = holdValue;
} //end swap

void sort(){
  //loop through all the elements in values array
  //if an element is greater than the next element, call swap() and printValues()
  int i, j;

  for(i = 0; i < (MAX); i++){
    for(j = 0; j < (MAX - 1); j++){
      if(values[j] > values[j + 1]){
        swap(&values[j], &values[j + 1]);
	printValues();
      } //end if
    } //end for
  } //end for
} //end sort

