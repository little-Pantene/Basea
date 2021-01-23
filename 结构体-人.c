#include<stdio.h>
#include<string.h>

struct person
{
	char name[20];
	int age;
};

int main()
{
	struct person A = { "ÅËæÃ",23,};
	printf("%s\n", A.name);
	printf("%d\n", A.age);
	return 0;
}

