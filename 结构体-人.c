#include<stdio.h>
#include<string.h>

//struct person
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct person A = { "潘婷",23,};
//	printf("%s\n", A.name);
//	printf("%d\n", A.age);
//	return 0;
//}

//struct person
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct person A = { "潘婷",23, };
//	printf("姓名：%s\n", A.name);
//	printf("虚假年龄：%d岁\n", A.age);
//	A.age = 3;
//	printf("实际年龄：%d岁\n", A.age);
//	return 0;
//}

//struct person
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct person A = { "潘婷",23};
//	struct person *a = &A;
//	printf("%s\n",(*a).name);
//	printf("%d\n", (*a).age);
//	return 0;
//}

struct person
{
	char name[20];
	int age;
};

int main()
{
	struct person A = { "潘婷",23 };
	struct person *a = &A;
	printf("%s\n", a->name);
	printf("%d\n", a->age);
	return 0;
}
