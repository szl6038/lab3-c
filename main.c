// Author: Shang Yuan Lim szl6038@psu.edu
// Collaborator: Shiquan Zhang spz5202@psu.edu
// Collaborator: Christian Davis ckd5367@psu.edu
// Collaborator: Mitchell Feyl mmf5871@psu.edu 
// Section: 010R
// Breakout: 14


#include <stdio.h>
#include <stdlib.h>
#include<readline/readline.h>

int sum_n(int n){
  if (n<=1){
    return n;
  }
  else {
    return n + sum_n(n-1);
  }
}

void print_n(const char *s, int n){
  if (n>0){
    printf("%s\n", s);
    print_n(s, n-1);
  }
}


int main(void){
  int n = atof(readline("Enter an int: "));
  printf("sum is %d.\n", sum_n(n));
  const char *s = readline("Enter a string: ");
  print_n(s, n);
  return 0;  
}