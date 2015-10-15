#include "SvgDrawer.hpp"

int main ( int argc, char** argv ) {
	mi::SvgDrawer drawer ( 300, 300, "test.svg");
	drawer.setViewBox( -2, -2, 2, 2);
	
	drawer.setStrokeColor("red");
	drawer.drawLine(-1.5, -1.5, -1.5, 1.5);
	drawer.setStrokeColor("blue");
	drawer.drawLine(-1.5, 1.5, 1.5, 1.5);
	drawer.setStrokeColor("yellow");
	drawer.drawLine(1.5, 1.5, 1.5, -1.5);
	drawer.setStrokeColor("green");
	drawer.drawLine(1.5, -1.5, -1.5, -1.5);
	// automatically saved
	return 0;
}

