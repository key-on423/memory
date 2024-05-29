#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char arr1[] = {"My grandma was the women who love me most in this world\n" };
	char arr2[] = {"*********************************************************" };
	char arr3[] = {"She was the kindest and smartest wowan I ever seen     \n" };
	char arr4[] = {"*********************************************************" };
	int r,l;
	r = sizeof(arr1) - 1;
	l = 0;
	while (l <= r)
	{
		arr2[l] = arr1[l];
		arr2[r] = arr1[r];
		printf("%s", arr2);
		Sleep(50);
		system("cls");
		l++;
		r--;
	}
	printf("%s", arr2);
	Sleep(1000);
	system("cls");
	r = sizeof(arr1) - 1;
	l = 0;
	while (l <= r)
	{
		arr4[l] = arr3[l];
		arr4[r] = arr3[r];
		printf("%s", arr4);
		Sleep(50);
		system("cls");
		l++;
		r--;
	}
	printf("%s", arr2);
	printf("%s", arr4);
	printf("Good night");
	return 0;
}