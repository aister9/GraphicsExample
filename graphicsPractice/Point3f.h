#pragma once

class Point3f {
public:
	float x;
	float y;
	float z;

	Point3f() :x(0), y(0), z(0) {};
	Point3f(float x, float y, float z) : x(x), y(y), z(z) {}

	Point3f operator+(const Point3f& b) {
		return Point3f(x + b.x, y + b.y, z + b.z);
	}

	Point3f operator/(const float& value) {
		return Point3f(x / value, y / value, z / value);
	}

	Point3f operator*(const float& value) {
		return Point3f(x * value, y * value, z * value);
	}
};