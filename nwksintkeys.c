#include <stdio.h>
#include <stdlib.h>
#include "mbedtls/mbedtls/aes.h"

int main (int argc, char** argv)
{
	if (argc<=4) printf("Number of arguements are not sufficient\n");
	else if (argc>5) printf("Number of arguements are exceeded\n");
	else 
	{
      printf("Your arguements are:\n");
      for (int i=0; i<=argc; i++)
      {
      	printf("%s\n", argv[i]);
      }
	}
}