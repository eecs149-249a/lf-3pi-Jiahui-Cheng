#include <stdio.h>

int main() {
  // Assign x (an integer) to 5
  int x = 5;
 
  // TODO: create a pointer to x
  // Hint: the first blank should be a variable type
  //       the second blank should be the address of x
  int* pointer_to_x = &x;

  // This line should print 5
  printf("Dereference pointer to x:%d\n", *pointer_to_x);
  printf("Access content of pointer to x:%p\n",pointer_to_x);
  printf("Access address of x:%p\n",&x);

  return 0;
}
