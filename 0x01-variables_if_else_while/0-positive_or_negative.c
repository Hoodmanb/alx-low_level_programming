#include <stdio.h>
#include <time.h>
    int main(void)
  {
    int n;
    Srand (time(0));
    n = rand() -RAND_MAX 12;
    printf("The number %d is",n);
    if (n>0) {
       printf ("positive\n");
     } else if(n==0) {
       printf("zero\n");
     } else {
       printf("negative\n");
     }
     return 0;
  }
