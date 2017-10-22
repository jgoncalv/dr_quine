#include<stdio.h>
/*
	c
*/
void test(){}
int main(){
	/*
		t
	*/
	test();
	char*s="#include<stdio.h>%1$c/*%1$c%2$cc%1$c*/%1$cvoid test(){}%1$cint main(){%1$c%2$c/*%1$c%2$c%2$ct%1$c%2$c*/%1$c%2$ctest();%1$c%2$cchar*s=%4$c%3$s%4$c;%1$c%2$cprintf(s, 10, 9, s, 34);%1$c%2$creturn 0;%1$c}%1$c";
	printf(s, 10, 9, s, 34);
	return 0;
}
