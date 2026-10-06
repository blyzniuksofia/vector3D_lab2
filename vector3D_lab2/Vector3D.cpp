#include "vector3D.h"
#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

void vector3D::Init(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

void vector3D::Read() {
	cout << "Введіть x, y, z: ";

	cin >> x >> y >> z;
}

void vector3D::Display() const {
	cout << toString() << endl;
}

string vector3D::toString() const {
	ostringstream coords;
	coords << "(" << x << ", " << y << ", " << z << ")";
	return coords.str();

}

vector3D vector3D::add(const vector3D& other) const {
	vector3D result;
	result.Init(x + other.x, y + other.y, z + other.z);
	return result;
}

vector3D vector3D::sub(const vector3D& other) const {
	vector3D result;
	result.Init(x - other.x, y - other.y, z - other.z);
	return result;
}

double vector3D::dot(const vector3D& other) const {
	return x * other.x + y * other.y + z * other.z;
}

vector3D vector3D::mul(double k) const {
	vector3D result;
	result.Init(x * k, y * k, z * k);
	return result;
}

bool vector3D::equals(const vector3D& other) const {
	return x == other.x && y == other.y && z == other.z;
}

double vector3D::length() const {
	return sqrt(x * x + y * y + z * z);
}

int vector3D::comparelength(const vector3D& other) const {
	double l1 = length();
	double l2 = other.length();
	if (l1 < l2) return -1;
	if (l1 > l2) return 1;
	return 0;
}

