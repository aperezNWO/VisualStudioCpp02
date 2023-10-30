#include "Algorithm.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#pragma hdrstop
#pragma argsused


	//
	Algorithm::Algorithm()
	{

	}
	//
	Algorithm::~Algorithm()
	{

	}
	//
	int Algorithm::OpenFile()
	{
		// declaration of file pointer
		FILE* fp = NULL;
		// declaration of variable
		int x;
		// opening of file
		fopen_s(&fp, "file.txt", "w+");
		// checking of error
		if (!fp)
			return 1;
		// giving content
		for (x = 1; x <= 10; x++)
			fprintf(fp, "%d\n", x);
		// closing of file
		fclose(fp);
		//
		return 0;
	}

	//
	int Algorithm::sum(int numberOne, int numberTwo)
	{
	   int    result        = numberOne + numberTwo;

	   return result;
	}
	//
	char Algorithm::sum_c(int numberOne, int numberTwo)
	{
		//
		int   result        = numberOne + numberTwo;
		char  return_value  = '3';

		//
		return return_value;
	}
	//
	char* Algorithm::sum_file(int numberOne, int numberTwo,char* file_status_c)
	{
		  int file_status  = OpenFile();
		  *file_status_c   = (file_status + '0');
		  char* return_value = (char*)"OK";
		  return return_value;
	}
	//
	char* Algorithm::sum_str(int numberOne, int numberTwo, char* return_value_c)
	{
		//
		int         result    = numberOne + numberTwo;
		*return_value_c       = (result + '0');

		//https://stackoverflow.com/questions/59358169/passing-a-return-char-from-c-to-c-sharp-with-dllimport
		char* getRbtData = new char[128];
		memset(getRbtData, 0, strlen(getRbtData));
		char* _getRbtData = (char*)malloc(sizeof(char));
		sprintf_s(_getRbtData,128,"%i = %i + %i",result, numberOne, numberTwo);
		memcpy(getRbtData, _getRbtData, strlen(_getRbtData));

		return getRbtData;
	}
	//
	char* Algorithm::Dijkstra(char* input)
	{
		char* output = new char[128];
		memset(output, 0, strlen(output));
		char* _output = "1.0;23.0;55.0;91.0;594.0;";
		memcpy(output, _output, strlen(_output));

		return output;
	};
	//
	char* Run(int numberOne, int numberTwo, char* return_value_c)
	{
		Algorithm algorithm;

		return algorithm.sum_str(numberOne,numberTwo, return_value_c);
	};

// how to creaate a dll in c++ which targets x86 platform using visual studio code
// how to configure visual studio code to create a dll in c++ which targets x86 platform 
// cmake -S 05 -B 05\build -A win32
