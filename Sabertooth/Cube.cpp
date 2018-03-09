#include "Cube.h"



Cube::Cube()
{
}


Cube::~Cube()
{
}

void Cube::Create()
{

	GLfloat tempVertices[] = {
		-0.5f, -0.5f, -0.5f, 0.0f, 0.0f,	// Back Face
		0.5f, -0.5f, -0.5f, 1.0f, 0.0f,
		0.5f,  0.5f, -0.5f, 1.0f, 1.0f,
		0.5f,  0.5f, -0.5f, 1.0f, 1.0f,
		-0.5f,  0.5f, -0.5f, 0.0f, 1.0f,
		-0.5f, -0.5f, -0.5f, 0.0f, 0.0f,

		-0.5f, -0.5f,  0.5f, 0.0f, 0.0f,	// Front Face
		0.5f, -0.5f,  0.5f, 1.0f, 0.0f,
		0.5f,  0.5f,  0.5f, 1.0f, 1.0f,
		0.5f,  0.5f,  0.5f, 1.0f, 1.0f,
		-0.5f,  0.5f,  0.5f, 0.0f, 1.0f,
		-0.5f, -0.5f,  0.5f, 0.0f, 0.0f,

		-0.5f,  0.5f,  0.5f, 1.0f, 0.0f,	// Left Face
		-0.5f,  0.5f, -0.5f, 0.0f, 1.0f,
		-0.5f, -0.5f, -0.5f, 0.0f, 1.0f,
		-0.5f, -0.5f, -0.5f, 0.0f, 1.0f,
		-0.5f, -0.5f,  0.5f, 1.0f, 0.0f,
		-0.5f,  0.5f,  0.5f, 1.0f, 0.0f,

		0.5f,  0.5f,  0.5f, 1.0f, 1.0f,	// Right Face
		0.5f,  0.5f, -0.5f, 0.0f, 1.0f,
		0.5f, -0.5f, -0.5f, 0.0f, 0.0f,
		0.5f, -0.5f, -0.5f, 0.0f, 0.0f,
		0.5f, -0.5f,  0.5f, 1.0f, 0.0f,
		0.5f,  0.5f,  0.5f, 1.0f, 1.0f,

		-0.5f, -0.5f, -0.5f, 0.0f, 1.0f,	// Down Face
		0.5f, -0.5f, -0.5f, 1.0f, 1.0f,
		0.5f, -0.5f,  0.5f, 1.0f, 0.0f,
		0.5f, -0.5f,  0.5f, 1.0f, 0.0f,
		-0.5f, -0.5f,  0.5f, 0.0f, 0.0f,
		-0.5f, -0.5f, -0.5f, 0.0f, 1.0f,

		-0.5f, +0.5f, -0.5f, 0.0f, 0.0f,	// Top Face
		+0.5f, +0.5f, -0.5f, 1.0f, 0.0f,
		+0.5f, +0.5f, +0.5f, 1.0f, 1.0f,
		+0.5f, +0.5f, +0.5f, 1.0f, 1.0f,
		-0.5f, +0.5f, +0.5f, 0.0f, 1.0f,
		-0.5f, +0.5f, -0.5f, 0.0f, 0.0f,
	};

	vertices = tempVertices;
	verticesQtd = 36;

	BindVertices();

}