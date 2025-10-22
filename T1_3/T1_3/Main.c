#include <stdio.h>

#define DEBUG

#ifdef DEBUG
void debug_message(const char* message) {
	printf("DEBUG: %s\n", message);
}
#else
void debug_message(const char* message) {
	// Do nothing
}
#endif


int main()
{
	printf("Program started.\n");

	int n = 9;
	char buffer[101];

	debug_message("Checking user input data");

	if (n > 23)
	{
		snprintf(buffer, sizeof(buffer), "Data check validated. Value: %d", n);
		debug_message(buffer);
	}
	else
	{
		snprintf(buffer, sizeof(buffer), "Data check failed. Value too low");
		debug_message(buffer);
	}
	printf("Program finished.\n");
	return 0;
}