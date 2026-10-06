#pragma once
#include <string>

class vector3D
{
	double x, y, z;
public:
	void Init(double x, double y, double z);
	void Read();
	void Display() const;
	std::string toString() const;
	vector3D add(const vector3D& other) const;
	vector3D sub(const vector3D& other) const;
	double dot(const vector3D& other) const;
	vector3D mul(double k) const;
	bool equals(const vector3D& other) const;
	double length() const;
	int comparelength(const vector3D& other) const;

};
