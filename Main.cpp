#include <iostream>;

using namespace std;

int main()
{
	int input;
	int output = 1;

	cout << "Geben Sie die Zahl ein: ";
	cin >> input;

	for(int i = input; i > 1; i--)
	{
		output = i * output;
	}
	cout << "Die Fakult�t betr�gt: " << output << endl;

	return 0;
}
