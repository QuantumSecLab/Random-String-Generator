#include <cstdio>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include "sodium.h"

using namespace std;

int main()
{
	if (sodium_init() < 0)
	{
		printf("Libsodium is not correctly initialized. The program is going to exit.");
		
		system("pause");

		return 1;
	}
	else
	{
		char charSet[] = "1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
		uint32_t cur = 0;
		int length = 0, num = 0, mod = strlen(charSet);
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
				cur = randombytes_random();
				curChar = charSet[cur % mod];
				printf("%c", curChar);
			}
			printf("\n");
		}

		printf("============================================\n");

		system("pause");

		return 0;
	}
}