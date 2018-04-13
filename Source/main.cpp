#include <iostream>
#include <cstdlib>
#include <sstream>

using namespace std;

int main(int argc, char **argv)
{
	short desired = 0;
	if(argc == 3)
	{
		stringstream s(argv[2]);
		s >> desired;
	}
	while(system(argv[1]) != desired)
		cout << "Retrying";
	return 0;
}

