#include <stdio.h>
#include <time.h>
int main()
{
	time_t currentTime;
	time(&currentTime);
	char*date = ctime(&currentTime);
	printf("/*\n");
	printf("\tWritten By:-\tPrabin Kumar Sabat\n");
	printf("\tDate:-\t\t%.10s 2023\n", date);
	printf("\tTask:-\t\t\n");
	printf("\tGuided By:-\tDarsan Sir\n");
	printf("*/\n\n\n");
	//printf("//Declaration \n");
	//printf("void fileHeader(void);\n");
	//printf("void fileEnd(void);\n");
	//printf("\n\n");
	printf("#include <stdio.h> \n#include \"myFunctions.h\"\n\n");
	printf("int main()\n{\n\n}\n");
	return 0;
}
