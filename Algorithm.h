#ifndef ALGORITHM_H
#define ALGORITHM_H
#endif

#include "iterativeList.h"
#include "recursiveList.h"
#include <sstream>
#include <iostream>
#include <string>
#pragma once

   class Algorithm
   {
	   public :
			Algorithm();
			~Algorithm();
		   int     OpenFile();
		   int     sum(int numberOne, int numberTwo);
		   char    sum_c(int numberOne, int numberTwo);
		   char*   sum_file(int numberOne, int numberTwo, char* file_status_c);
           char*   sum_str(int numberOne, int numberTwo, char* return_value_c);
		   char*   Dijkstra(char* input);
   };

   extern "C" __declspec(dllexport) char* Run(int numberOne, int numberTwo, char* return_value_c);





