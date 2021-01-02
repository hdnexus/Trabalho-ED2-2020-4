
#ifndef COVIDSTATISTICS_H_INCLUDED
#define COVIDSTATISTICS_H_INCLUDED
#include "../CovidInfo/CovidInfo.cpp"
#include <iostream>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

class CovidStatistics
{
private:
  vector<CovidInfo> covidInfoList;
public:
  //Função de processamento do csv
  CovidStatistics(vector<string> processedCsv);
  ~CovidStatistics();
  void printDates();
};

#endif