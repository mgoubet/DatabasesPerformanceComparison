#pragma once
#include "Parameter.h"

class GraphGenerator
{
public:
	GraphGenerator();
	~GraphGenerator();
	static void generatePerson(const std::vector<int>& tabAge, const std::vector<std::string>& tabName, int nb_person, char* separator);
	static void generateCity(const std::vector<std::string>& tabCity, int nbVille, char* separator);
	static void generateIsFriend(int nb_person,int nbAmi, std::vector<std::vector<int>> tabAmi, char* separator);
	static void generateLiveIn(int nb_person, int nbVille, char* separator);
};

