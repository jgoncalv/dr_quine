#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define STR "#include <stdlib.h>%2$c#include <stdio.h>%2$c#include <fcntl.h>%2$c#include <unistd.h>%2$c#include <string.h>%2$c%2$c#define STR %3$c%4$s%3$c%2$c%2$cint main(){%2$c%1$cint x = %5$d;%2$c%1$cint ini;%2$c%1$cint fd;%2$c%1$cchar *name;%2$c%1$cchar *cmd;%2$c%1$cchar *cmd2;%2$c%2$c%1$cini = x;%2$c%1$cif (strcmp(%3$csrc/Sully.c%3$c, __FILE__) != 0)%2$c%1$c%1$cx--;%2$c%1$cif (x < 0)%2$c%1$c%1$creturn (0);%2$c%1$cif (asprintf(&name, %3$cSully_%%d.c%3$c, x) == -1)%2$c%1$c%1$creturn (1);%2$c%1$cfd = open(name, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);%2$c%1$cfree(name);%2$c%1$cif (fd == -1)%2$c%1$c%1$creturn (1);%2$c%1$cif (asprintf(&cmd, %3$cgcc -Wall -Wextra -Werror -o Sully_%%1$d Sully_%%1$d.c%3$c, x) == -1)%2$c%1$c%1$creturn (1);%2$c%1$cif (asprintf(&cmd2, %3$c./Sully_%%d%3$c, x) == -1)%2$c%1$c%1$creturn (1);%2$c%1$cdprintf(fd, STR, 9, 10, 34, STR, x);%2$c%1$cclose(fd);%2$c%1$csystem(cmd);%2$c%1$cif (ini > 0)%2$c%1$c%1$csystem(cmd2);%2$c%1$cfree(cmd);%2$c%1$cfree(cmd2);%2$c%1$creturn (0);%2$c}%2$c"

int main(){
	int x = 5;
	int ini;
	int fd;
	char *name;
	char *cmd;
	char *cmd2;

	ini = x;
	if (strcmp("src/Sully.c", __FILE__) != 0)
		x--;
	if (x < 0)
		return (0);
	if (asprintf(&name, "Sully_%d.c", x) == -1)
		return (1);
	fd = open(name, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	free(name);
	if (fd == -1)
		return (1);
	if (asprintf(&cmd, "gcc -Wall -Wextra -Werror -o Sully_%1$d Sully_%1$d.c", x) == -1)
		return (1);
	if (asprintf(&cmd2, "./Sully_%d", x) == -1)
		return (1);
	dprintf(fd, STR, 9, 10, 34, STR, x);
	close(fd);
	system(cmd);
	if (ini > 0)
		system(cmd2);
	free(cmd);
	free(cmd2);
	return (0);
}
