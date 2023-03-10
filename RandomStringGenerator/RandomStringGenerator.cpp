#include <cstdio>
#include <ctime>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{
	srand((unsigned int)time(NULL));

	char charSet[] = "1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int cur = 0, length = 0, num = 0, mod = strlen(charSet);
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
			cur = rand();
			curChar = charSet[cur % mod];
			printf("%c", curChar);
		}
		printf("\n");
	}

	printf("============================================\n");

	system("pause");

	return 0;
}