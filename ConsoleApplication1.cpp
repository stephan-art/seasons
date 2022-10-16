


#include <iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	if (N == 12 || N == 1 || N == 2)
		cout << "Winter";
	if (N == 3 || N == 4 || N == 5)
		cout << "Spring";
	if (N == 6 || N == 7 || N == 8)
		cout << "Summer";
	if (N == 9 || N == 10 || N == 11)
		cout << "Autumn";
	if (N >= 13 && N<=100)
		cout << "Error";

}
