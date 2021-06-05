# include <stdio.h>
# include <string.h>

int main( )
{
	FILE *fp ;
	char data[50] = "File handling executed successfully.";
	fp = fopen("file_handling.txt", "w");
	if ( fp == NULL )
	{
		printf( "Failed to open the file." );
	}
	else
	{
		printf("The file is now opened.\n");
		if ( strlen ( data ) > 0 )
		{
			fputs(data, fp);
			fputs("\n", fp);
		}
		fclose(fp);
		printf("Data successfully written and the file is closed.");
	}
	return 0;
}
