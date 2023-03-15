#include <cstdio>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <Windows.h>

typedef int(__cdecl* SODIUM_INIT)();
typedef unsigned int(__cdecl* RANDOMBYTES_UNIFORM)(unsigned int CharSetCard);

int main()
{
	HINSTANCE hinstLib = LoadLibrary(L"libsodium.dll");
	
	if (hinstLib == NULL) {
		printf("Libsodium is not correctly loaded. The program is going to exit.");

		system("pause");

		return 1;
	}
	SODIUM_INIT sodium_init = (SODIUM_INIT)GetProcAddress(hinstLib, "sodium_init");
	RANDOMBYTES_UNIFORM randombytes_uniform = (RANDOMBYTES_UNIFORM)GetProcAddress(hinstLib, "randombytes_uniform");

	if (sodium_init() < 0)
	{
		printf("Libsodium is not correctly initialized. The program is going to exit.");

		system("pause");

		return 1;
	}

	char charSet[] = "1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	unsigned int cur = 0, charSetCard = strlen(charSet);
	int length = 0, num = 0;
	char curChar = '1';

	printf("Input the length of random string(s): \n");
	scanf_s("%d", &length);
	printf("Input the number of random string(s) you need: \n");
	scanf_s("%d", &num);

	printf("===================Result====================\n");

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < length; j++)
		{
			cur = randombytes_uniform(charSetCard);
			curChar = charSet[cur];
			printf("%c", curChar);
		}
		printf("\n");
	}

	printf("============================================\n");

	system("pause");

	return 0;

}