#pragma once
#include "Triangle.h"
#include <math.h>
#include <vector>

class Circle_t {
public:
	
	std::vector<Triangle_t> list;

	Circle_t(){}
	Circle_t(Point3f center, float r, int sn) {
		float rad = 2 * 3.141592 / (float)sn;

		for (int i = 0; i < sn; i++) {
			Triangle_t t(center, center + Point3f(cosf(rad*i) * r, sinf(rad * i) * r, 0), center + Point3f(cosf(rad * (i + 1)) * r, sinf(rad * (i + 1)) * r, 0));

			list.push_back(t);
		}
	}
};

class Donut_t {
public:

	std::vector<Triangle_t> list;

	Donut_t() {}
	Donut_t(Point3f center, float r1, float r2, int sn) {
		float rad = 2 * 3.141592 / (float)sn;

		for (int i = 0; i < sn; i++) {
			Triangle_t t(center + Point3f(cosf(rad * i) * r2, sinf(rad * i) * r2, 0),
						center + Point3f(cosf(rad * i) * r1, sinf(rad * i) * r1, 0),
						center + Point3f(cosf(rad * (i + 1)) * r1, sinf(rad * (i + 1)) * r1, 0));

			Triangle_t t2(center + Point3f(cosf(rad * i) * r2, sinf(rad * i) * r2, 0),
				center + Point3f(cosf(rad * (i + 1)) * r1, sinf(rad * (i + 1)) * r1, 0),
				center + Point3f(cosf(rad * (i + 1)) * r2, sinf(rad * (i + 1)) * r2, 0));

			list.push_back(t);
			list.push_back(t2);
		}
	}
};