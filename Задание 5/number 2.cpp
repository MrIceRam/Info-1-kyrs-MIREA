#include <iostream>
#include <cmath>
using namespace std;

bool checkSimple(int x) {
	for (int i = 2; i <= sqrt(x); i++) {
	    if (x % i == 0) {
	        return false;
	    }
	}
	return true;
}

int main() {
    int n;
    cout << "n: ";
    cin >> n;
    int arr[n];

	for (int i = 0; i < n; i++) {
	    arr[i] = i;
	}

    for (int i = 0; i < n; i++) {                                   
		if (checkSimple(arr[i]) == true)
			if (arr[i] != 0 and arr[i] != 1)
				cout << arr[i] << endl;
	}
}