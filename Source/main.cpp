#include <iostream>
#include <cstdlib>
#include <sstream>

using namespace std;

void print_usage()
{
	cout << "KeepTrying program\n" <<
		"Usage: keeptrying <command> [expected return code]" << endl;
}

int main(int argc, char **argv)
{
	if(argc <2)
	{
		print_usage();
		return 1;
	}
	if(argc>3)
	{
		print_usage();
		return 1;
	}
	short desired = 0;
	if(argc == 3)
	{
		desired = atoi(argv[2]);
	}
	while(system(argv[1]) != desired)
		cout << "Retrying";
	return 0;
}

