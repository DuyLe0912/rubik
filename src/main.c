#include <stdio.h>
#include <GL/glut.h>
#include "headers/indicators.h"
#include "headers/program_initialize.h"
#include "headers/moveslist.h"


int main(int argc, char **argv)
{
	/* Initializing stuff before entering main loop */
	initialize_glut(&argc, argv);
	initialize_callbacks();
	initialize_light();
	initialize_matrices();
	initialize_textures();

	/* Entering main program loop */
	glutMainLoop();

	return 0;
}
