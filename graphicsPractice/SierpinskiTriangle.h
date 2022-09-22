#pragma once
#include "Triangle.h"
#include <vector>

class SierpinskiTriangle {
public:
	std::vector<Triangle_t> list;

	void build(int n, Triangle_t tri){
		if (n == 0) return;
		if(n==1) list.push_back(tri);

		build(n - 1, Triangle_t(tri[0], (tri[0] + tri[1]) / 2, (tri[0] + tri[2]) / 2));
		build(n - 1, Triangle_t((tri[0] + tri[1]) / 2, tri[1], (tri[1] + tri[2]) / 2));
		build(n - 1, Triangle_t((tri[0] + tri[2]) / 2, (tri[1] + tri[2]) / 2, tri[2]));
	}
};