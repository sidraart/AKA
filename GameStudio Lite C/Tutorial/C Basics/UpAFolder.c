// Variables.c
// Display a 3D Model onscreen

#include <acknex.h>
#include <default.c>

void main()
{	
	level_load("../grid.hmp"); // Load Level from the Floder outside of this one

	ent_create("../earth.mdl", NULL, NULL) ; // Load and draw the 3D Model named earth.mdl 

	camera.x = -50 ; // Back the Camera up a bit so we can see the Model
	camera.z = 2 ; // and Up a hair so we can see the floor
}
