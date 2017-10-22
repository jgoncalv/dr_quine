#include<stdio.h>
#define CC
#define PP
#define FC(x) int main(){FILE *n=fopen("Grace_kid.c", "w");char*s="#include<stdio.h>%1$c#define CC%1$c#define PP%1$c#define FC(x) int main(){FILE *n=fopen(%2$cGrace_kid.c%2$c, %2$cw%2$c);char*s=%2$c%3$s%2$c;fprintf(n, s, 10, 34, s, 9);return 0;}%1$c/*%1$c%4$ch%1$c*/%1$cFC(1);%1$c";fprintf(n, s, 10, 34, s, 9);return 0;}
/*
	h
*/
FC(1);
