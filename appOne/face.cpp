#include"libOne.h"
void roundFace(float px, float py) {
	rectMode(CENTER);
	//顔
	fill(255, 255, 0);
	circle(px, py, 300);
	//白目
	fill(255);
	circle(px - 50, py, 80);
	circle(px + 50, py, 80);
	//黒目
	fill(0);
	circle(px - 50, py, 30);
	circle(px + 50, py, 30);
	//口
	fill(255, 200, 200);
	circle(px, py + 80, 50);
}
void squareFace(float px, float py, float angle) {
	//顔
	fill(255, 255, 0);
	rect(px, py, 300, 300, angle);
	//白目
	fill(255);
	rect(px - 50, py, 80, 80, angle);
	rect(px + 50, py, 80, 80, angle);
	//黒目
	fill(0);
	rect(px - 50, py, 30, 30, angle);
	rect(px + 50, py, 30, 30, angle);
	//口
	fill(255, 200, 200);
	rect(px, py + 80, 50, 50, angle);
}
