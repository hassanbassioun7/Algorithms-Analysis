
#include <iostream>
using namespace std;

struct MyPt {
	int x;
	int y;
};

//search a string with another string and bring the index of its first appearance
int stringMatching(string a, string b) {
	for (int i = 0; i <= a.length() - b.length(); i++) {
		int j = 0;
		while (j < b.length() && b[j] == a[i + j]) {
			j++;
		}
		if (j == b.length()) {
			return i;
		}
	}
	return -1;
}

//returns the points and the distance between the nearest two points
double closest(MyPt* Ar, int size, int& index1, int& index2) {
	double d = INT_MAX, dx, dy;
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			dx = (double)Ar[i].x - Ar[j].x;
			dy = (double)Ar[i].y - Ar[j].y;
			if (d > sqrt((dx * dx) + (dy * dy))) {
				d = MyMin(d, sqrt(dx * dx) + (dy * dy));
				index1 = i;
				index2 = j;
			}
		}
	}
	return d;
}
double MyMin(double a, double b) {
	if (a > b) {
		return b;
	}
	else if (a < b) {
		return a;
	}
}

//returns the shortest path


int main()
{
	string x = "amar amir el omaraa";
	string y = "ami";
	cout << stringMatching(x, y) << endl;

	MyPt ar[4];
	ar[0].x = 0;
	ar[0].y = 0;
	ar[1].x = 4;
	ar[1].y = 5;
	ar[2].x = 3;
	ar[2].y = 2;
	ar[3].x = 8;
	ar[3].y = 5;

	int size = 4;
	int p1 = 0;
	int p2 = 0;
	cout << closest(ar, size, p1, p2) << endl;
	cout << "first point is " << "(" << ar[p1].x << "," << ar[p1].y << ")" << endl;
	cout << "second point is " << "(" << ar[p2].x << "," << ar[p2].y << ")" << endl;
}

