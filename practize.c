#include <unistd.h>

void print_char(char c)
{
	write(1, &c, 1);
}
void print_all_letters_starting_from(char c)
{
	if (c > '2')
	{
		return;
	}
	print_char(c);
	print_all_letters_starting_from(c + 1);
}

void print_alphabet(void)
{
	print_all_letters_starting_from('a');
}

int main(void)
{
	print_alphabet();
	print_char('\n');
	return (0);
}
/*
#include <stdio.h>

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
int main(void)
{
	int f;
	
	f = factorial(5);
	printf("5! = %d\n", f);
	return (0);
} */
/*
int factorial(int n)
{
	int res;
	int i;

	res = 1;
	i = 1;
	while (i <= n)
	{
		res = res * i;
		i++;
	}
	return (res);
}

int main(void)
{
	int f;

	f = factorial (5);
	printf("5! = %d\n" ,f);
	return (0);
} */
/*
int main()
{
	int C[3][2][2]={{{2,5},{7,9}},
			{{3,4},{6,1}},
			{{0,8},{11,13}}};
printf("%d %d %d %d", C, *C, C[0], &C[0][0]);
} */
/*
#include <string.h>

void print(const char *C)
{
	while(*C != '\0')
{
	printf("%c", *C);
	C++;
}
	printf("\n");
}

int main()
{
	char C[20] = "Hello World";
	print(C);
} */

/*
{
int a = 1025;
int *p;
p = &a;
printf("size of integer is %ld bytes\n", sizeof(int));
printf("Address  = %ls, value = %d\n",p,*p);
char *p0;
p0 = (char*)p;
printf("size of char is %ld bytes\n" , sizeof(char));
printf("Address = %s, value = %d\n", p0,*p0);
}
*/
/*
{
int x = 5;
int* p = &x;
*p = 6;
int** q = &p;
int*** r = &q;

printf("%d\n",*p);
printf("%d\n",*q);
printf("%d\n",**q);
printf("%d\n",*r);
printf("%ls\n",**r);
printf("%d\n",***r);
***r = 10;
printf("x = %d\n",x);
}
*/
