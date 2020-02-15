#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SELF "#include <fcntl.h>%c#include <unistd.h>%c#include <stdio.h>%c#include <string.h>%c#include <stdlib.h>%c%c#define SELF %c%s%c%c#define EXEC_CMD %c%s%c%c#define FILE_NAME %c%s%c%c%c/*%c** Why i put this comment ? Cause i can%c*/%c%cint main()%c{%c%cint i = %d;%c%cint fd;%c%cchar *exec_cmd;%c%cchar *file_name;%c%c%cif (i < 0)%c%c%creturn (0);%c%cif (strchr(__FILE__, '_'))%c%c%ci--;%c%cfile_name = NULL;%c%c(void)asprintf(&file_name, FILE_NAME, i);%c%cif ((fd = open(file_name, O_WRONLY | O_CREAT | O_TRUNC, 0644)) > 0)%c%c{%c%c%c(void)dprintf(fd, SELF, 10, 10, 10, 10, 10, 10, 34, SELF, 34, 10, 34, EXEC_CMD, 34, 10, 34, FILE_NAME, 34, 10, 10, 10, 10, 10, 10, 10, 10, 9, i, 10, 9, 10, 9, 10, 9, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 9, 10, 9, 9, 10, 9, 9, 10, 9, 9, 10, 9, 9, 10, 9, 9, 10, 9, 10, 9, 10, 9, 10, 10);%c%c%c(void)close(fd);%c%c%cexec_cmd = NULL;%c%c%c(void)asprintf(&exec_cmd, EXEC_CMD, i, i, i);%c%c%c(void)system(exec_cmd);%c%c%c(void)free(exec_cmd);%c%c}%c%c(void)free(file_name);%c%creturn (0);%c}%c"
#define EXEC_CMD "clang -Wall -Wextra -Werror -o Sully_%d Sully_%d.c && ./Sully_%d"
#define FILE_NAME "Sully_%d.c"

/*
** Why i put this comment ? Cause i can
*/

int main()
{
	int i = 5;
	int fd;
	char *exec_cmd;
	char *file_name;

	if (i < 0)
		return (0);
	if (strchr(__FILE__, '_'))
		i--;
	file_name = NULL;
	(void)asprintf(&file_name, FILE_NAME, i);
	if ((fd = open(file_name, O_WRONLY | O_CREAT | O_TRUNC, 0644)) > 0)
	{
		(void)dprintf(fd, SELF, 10, 10, 10, 10, 10, 10, 34, SELF, 34, 10, 34, EXEC_CMD, 34, 10, 34, FILE_NAME, 34, 10, 10, 10, 10, 10, 10, 10, 10, 9, i, 10, 9, 10, 9, 10, 9, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 9, 10, 9, 9, 10, 9, 9, 10, 9, 9, 10, 9, 9, 10, 9, 9, 10, 9, 10, 9, 10, 9, 10, 10);
		(void)close(fd);
		exec_cmd = NULL;
		(void)asprintf(&exec_cmd, EXEC_CMD, i, i, i);
		(void)system(exec_cmd);
		(void)free(exec_cmd);
	}
	(void)free(file_name);
	return (0);
}
