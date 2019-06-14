#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <conio.h>
using namespace std;
//Size of Hash table
const int MOD = 997;
const int base = 331;
struct Meaning {
	string def = "";
	vector <string> example;
};
struct TYPE
{
	string type_name;
	vector<Meaning*> meanings;
};
struct Word {
	string word = "";
	TYPE* type;
	Word* pre;
	Word* next;
};
struct Doublelist {
	Word* head = NULL;
	Word* tail = NULL;
};
class Hash
{
public:
	//Dont use this
	Doublelist* Hashtable[MOD];
	//vector <Word*> hashtable[MOD];
public:
	Hash();
	int HashFunc(string key);
	void initTable();
	Word* createWord(string word);
	Word* createWord(string word, TYPE* type);
	TYPE* createType(string type_name);
	void addMeaning(TYPE*& type, Meaning* m);
	Meaning* createMeaning(string def);
	void addExam(Meaning*& m, string exam);
	void addType(Word*& w, TYPE* type);
	void addWord();
	//Dont use this
	void addTable(Word* w);
	bool deleteWord(string word);
	bool editWord(Word* w);
	void showTable();
	void updateFile();
	//Dont use this
	void showWord(Word* w);
	Word* Search(string key);

};

