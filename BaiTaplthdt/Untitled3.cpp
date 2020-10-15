#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

void writeToFile(FILE *file)
{
	for (int i = 1; i <= 5; i++)
		fprintf(file, "This is an example line %d\n", i);
}

void readFromFile(FILE *file)
{
	char str[255];
	while (fgets(str, 255, file) != NULL)
	{
		cout << str;
	}
}

int main()
{
	const char *filePath = "D:/lthdt/Student.txt";
	FILE *file;

	file = fopen(filePath, "r");
	if (!file)
		cout << "Can not open this file" << endl;
	else
		cout << "File is opened" << endl;

	writeToFile(file);
	readFromFile(file);

	fclose(file);

	return 0;
}
