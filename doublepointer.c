#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
	  char ch = 'a';
	    char *p;
	      char **q;
	        p = &ch;
		  q = &p;
		    printf("%c %c \n", *p, **q);

		      int n, m, i;
		        char tmpS[50];
			  printf("enter no. of students: ");
			    scanf("%d", &n);

			      q = (char **) malloc(sizeof(char *) * n);
			        for (i = 0; i < n; i++) {
					    scanf("%s", tmpS);
					        m = strlen(tmpS);
						    m = m + 1;
						        q[i] = (char *) malloc(sizeof(char) * m);
							    strcpy(q[i], tmpS);
							      }

				  for (i = 0; i < n; i++) {
					     printf("%s\n", q[i]);
					       }
}
