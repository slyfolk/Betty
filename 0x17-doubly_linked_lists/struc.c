#include <stdio.h>
#include <stdlib.h>


/**
 *
 */
typedef struct record 
{
	char *name;
	int height;
}c_record;

int main()
{
	c_record c1;

		c1->name = "chioma";
		c1->height = 4;
		printf("%s\n", c1->name);
		printf("%d\n", c1->height);
		return (0);
}


