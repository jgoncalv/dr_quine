#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
int i=-1;
char cmd[500] = "clang -Wall -Werror -Wextra ";
char new[100] = "Sully_0.c";
new[6] = i + '0';
FILE *f = fopen(new, "w");

i--;
char *s = "#include<stdio.h>%1$c#include<stdlib.h>%1$c#include<string.h>%1$c%1$cint main(){%1$cint i=%4$d;%1$cchar cmd[500] = %2$cclang -Wall -Werror -Wextra %2$c;%1$cchar new[100] = %2$cSully_0.c%2$c;%1$cnew[6] = i + '0';%1$cFILE *f = fopen(new, %2$cw%2$c);%1$c%1$ci--;%1$cchar *s = %2$c%5$s%2$c;%1$cfprintf(f, s, 10, 34, 9, i, s);%1$cfclose(f);%1$cstrcpy(cmd + strlen(cmd), new);%1$cstrcpy(cmd + strlen(cmd), %2$c -o %2$c);%1$cnew[7] = 0;%1$cstrcpy(cmd + strlen(cmd), new);%1$cif (i >= 0)%1$c{%1$c%3$cstrcpy(cmd + strlen(cmd), %2$c && ./%2$c);%1$c%3$cstrcpy(cmd + strlen(cmd), new);%1$c}%1$csystem(cmd);%1$creturn 0;%1$c}%1$c";
fprintf(f, s, 10, 34, 9, i, s);
fclose(f);
strcpy(cmd + strlen(cmd), new);
strcpy(cmd + strlen(cmd), " -o ");
new[7] = 0;
strcpy(cmd + strlen(cmd), new);
if (i >= 0)
{
	strcpy(cmd + strlen(cmd), " && ./");
	strcpy(cmd + strlen(cmd), new);
}
system(cmd);
return 0;
}
