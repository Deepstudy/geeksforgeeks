#include<stdio.h>

int main() {

	 int x = 10;

	  printf("address of x is %p\n", &x);



	   long int p;

	    p = &x;

	     printf("address of x is %p\n", p);

	      //an int variable could store the address, but no direct mechanism of obtaining the value at the address.



	      int *q;

	       q = &x;

	        printf("address of x is %p and value at x is %d\n", q, *q);

		 //A pointer to store the address. * operator acts as indirection to obtain the value at the address.



		 printf("value is %d %d\n", *q, *(&x));

		 int a[] = {1, 2, 3};

		  char s[] = "raj";

		   

		   int *pa = a;

		    char *ps = s;
		    printf("%d %d %s\n", pa[0], pa[1], ps[0]);
		    // pointer arthimetic

		     printf("%d %d \n", *(pa + 0), *(pa + 1));

		      pa = pa + 2;

		       printf("%d %d\n", *pa, *(a + 2));



		        int * const cp = a;  

			 //cp = cp + 2; //try this

			 //a = a + 2;  //try this... array name is a const pointer to the begin of an array

			
}

