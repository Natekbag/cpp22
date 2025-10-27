#include <iostream>
using namespace std;
int main() {
	int i = 0;
	do 
	{
		cout << i << " ";
		i++;
		if (i == 10) {
			cout << "Znalazlem 10!" << endl;
		}
	} while(i != 10);
	return 0;
}
