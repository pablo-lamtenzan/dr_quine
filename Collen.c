#include <stdio.h>

/*
** This is a comment outside the program
*/

#define SELF "#include <stdio.h>%c%c/*%c** This is a comment outside the program%c*/%c%c#define SELF %c%s%c%c%cvoid other_function()%c{%c%cprintf(SELF, 10, 10, 10, 10, 10, 10, 34, SELF, 34, 10, 10, 10, 10, 9, 10, 10, 10, 10, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 10, 10);%c}%c%cint main()%c{%c%c/*%c%c** This is a comment inside the main%c%c*/%c%cother_function();%c%creturn (0);%c}%c"

void other_function()
{
	printf(SELF, 10, 10, 10, 10, 10, 10, 34, SELF, 34, 10, 10, 10, 10, 9, 10, 10, 10, 10, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 10, 10);
}

int main()
{
	/*
	** This is a comment inside the main
	*/
	other_function();
	return (0);
}
