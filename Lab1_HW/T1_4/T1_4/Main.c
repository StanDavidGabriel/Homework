#include <stdio.h>

void hello()
{
#if defined(_WIN32) || definded(_WIN64)
	printf("Hello Windows!\n");
#elif defined(__linux__)
	printf("Hello Linux!\n");
#else 
	printf("Hello, unknown OS!\n");
#endif
}

int main()
{
	printf("System check:\n");
	hello();
	return 0;
}