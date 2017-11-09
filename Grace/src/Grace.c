#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define LIGNE "#include <stdio.h>%2$c#include <fcntl.h>%2$c#include <unistd.h>%2$c%2$c#define LIGNE %3$c%4$s%3$c%2$c#define NOM %3$cGrace_kid.c%3$c%2$c#define FCT(s, file) int main(){int fd;fd = open(file, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);if (fd == -1){return(1);}dprintf(fd, s, 9, 10, 34, s);close(fd);return (0);}%2$c%2$c/*%2$c%1$ch%2$c*/%2$c%2$cFCT(LIGNE, NOM)%2$c"
#define NOM "Grace_kid.c"
#define FCT(s, file) int main(){int fd;fd = open(file, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);if (fd == -1){return(1);}dprintf(fd, s, 9, 10, 34, s);close(fd);return (0);}

/*
	h
*/

FCT(LIGNE, NOM)
