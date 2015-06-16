#include "Header.h"

int main(int argc, char* argv[])
{
	int i, j, file_number;
	char command[FILENAME_MAX];
	char buffer[3];
	
	// Variables initialization
	file_number = sizeof(file_list) / sizeof(*file_list);

	for (i = 0; i < file_number; i++)
	{
		for (j = 0; j < REPETITIONS; j++)
		{
			// Reset and setup
			command[0] = '\0';
			buffer[0] = '\0';
			sprintf(buffer, "%d", j);

			// Base
			strcpy(command, X265_PATH);

			// Log
			strcat(command, " --csv ");
			strcat(command, LOGDIR);
			strncat(command, file_list[i], strlen(file_list[i]) - 4);
#if 0
            strcat(command, "_");
            strcat(command, buffer);
#endif // 0

			strcat(command, LOG_EXT);
			strcat(command, " ");

			// Input
			strcat(command, INPUTDIR);
			strcat(command, file_list[i]);
			strcat(command, " ");

			// Output
			strcat(command, OUTPUTDIR);
			strncat(command, file_list[i], strlen(file_list[i]) - 4);
			strcat(command, "_");
			strcat(command, buffer);
			strcat(command, OUT_EXT);

			// Execute
			system(command);
		}
	}

	return (0);
}