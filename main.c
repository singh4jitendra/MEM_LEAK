#include <mcheck.h>

void main()
{
	mtrace();
	char *s = malloc(10);
	muntrace();

}
