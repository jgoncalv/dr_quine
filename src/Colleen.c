#include<stdio.h>

/*
	c
*/
int	test(int x)
{
	return (x + 5);
}

int main()
{
	/*
		t
	*/
	test(5);
	char *s = "#include<stdio.h>%2$c%2$c/*%2$c%1$cc%2$c*/%2$cint%1$ctest(int x)%2$c{%2$c%1$creturn (x + 5);%2$c}%2$c%2$cint main()%2$c{%2$c%1$c/*%2$c%1$c%1$ct%2$c%1$c*/%2$c%1$ctest(5);%2$c%1$cchar *s = %3$c%4$s%3$c;%2$c%1$cprintf(s, 9, 10, 34, s);%2$c%1$creturn 0;%2$c}%2$c";
	printf(s, 9, 10, 34, s);
	return 0;
}
