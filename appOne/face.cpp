#include"libOne.h"
void roundFace(float px, float py) {
	rectMode(CENTER);
	//Šç
	fill(255, 255, 0);
	circle(px, py, 300);
	//”’–Ú
	fill(255);
	circle(px - 50, py, 80);
	circle(px + 50, py, 80);
	//•–Ú
	fill(0);
	circle(px - 50, py, 30);
	circle(px + 50, py, 30);
	//Œû
	fill(255, 200, 200);
	circle(px, py + 80, 50);
}
void squareFace(float px, float py, float angle) {
	//Šç
	fill(255, 255, 0);
	rect(px, py, 300, 300, angle);
	//”’–Ú
	fill(255);
	rect(px - 50, py, 80, 80, angle);
	rect(px + 50, py, 80, 80, angle);
	//•–Ú
	fill(0);
	rect(px - 50, py, 30, 30, angle);
	rect(px + 50, py, 30, 30, angle);
	//Œû
	fill(255, 200, 200);
	rect(px, py + 80, 50, 50, angle);
}
