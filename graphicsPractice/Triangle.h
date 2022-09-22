#pragma once
#include "Point3f.h"

class Triangle_t {
public:
	Point3f vertices[3];

	Triangle_t() {};
	Triangle_t(Point3f p1, Point3f p2, Point3f p3) { vertices[0] = p1; vertices[1] = p2; vertices[2] = p3; };

	Point3f& operator[](int idx) {
		if (idx < 0 || idx >2) {
			printf("Array index out of bound excepetion");
			exit(1);
		}
		return vertices[idx];
	}
};