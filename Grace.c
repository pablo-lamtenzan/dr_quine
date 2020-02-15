#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

/*
** This comment is on the mandatory part
*/

#define FILE_NAME "Grace_kid.c"

#define SELF "#include <fcntl.h>%c#include <unistd.h>%c#include <stdio.h>%c%c/*%c** This comment is on the mandatory part%c*/%c%c#define FILE_NAME %cGrace_kid.c%c%c%c#define SELF %c%s%c%c%c#define MAIN(x)int main(){int fd; if ((fd = open(x, O_WRONLY | O_CREAT | O_TRUNC, 0644)) > 0) {(void)dprintf(fd, SELF, 10, 10, 10, 10, 10, 10, 10, 10, 34, 34, 10, 10, 34, SELF, 34, 10, 10, 10, 10);}(void)close(fd); return (0);}%c%cMAIN(FILE_NAME)"

#define MAIN(x)int main(){int fd; if ((fd = open(x, O_WRONLY | O_CREAT | O_TRUNC, 0644)) > 0) {(void)dprintf(fd, SELF, 10, 10, 10, 10, 10, 10, 10, 10, 34, 34, 10, 10, 34, SELF, 34, 10, 10, 10, 10);}(void)close(fd); return (0);}

MAIN(FILE_NAME)