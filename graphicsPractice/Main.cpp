#include <iostream>
#include <GL/glut.h>

#include "SierpinskiTriangle.h"
#include "Circle.h"

void glVertex3f(Point3f &p) {
	glVertex3f(p.x, p.y, p.z);
}

void glTriangleT(Triangle_t& t) {
	glBegin(GL_TRIANGLES);
	glVertex3f(t[0]);
	glVertex3f(t[1]);
	glVertex3f(t[2]);
	glEnd();
}

Triangle_t t(Point3f(0.0f, 1.0f, 0.0f), Point3f(-1.0f, -1.0f, 0.0f), Point3f(1.0f, -1.0f, 0.0f));
SierpinskiTriangle res;
Circle_t circle(Point3f(0.f, 0.f, 0.f), 0.5, 20);
Donut_t donuts(Point3f(0.f, 0.f, 0.f), 0.5, 0.3, 20);

void displayFunc() {
	glClear(GL_COLOR_BUFFER_BIT);
	
	/*for(auto t : res.list){
		glTriangleT(t);
	}*/

	for (auto t : donuts.list) {
		glTriangleT(t);
	}

	glFlush();
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);

	res.build(5, t);

	glutCreateWindow("draw example");
	glutDisplayFunc(displayFunc);
	glutMainLoop();

	return 0;
}