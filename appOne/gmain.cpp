/*#include"libOne.h"
void gmain() {
	window(1920, 1080, full);
	//データ
	struct COLOR green = { 0, 255, 0 };
	struct COLOR yellow = { 255, 255, 0 };
	struct COLOR red = { 255, 0, 0 };
	struct COLOR color = green;

	int hpMax = 500;
	int hp = hpMax;
	int hpWarning = hpMax * 0.3f;
	int hpDanger = hpMax * 0.1f;
	float px = 700;
	float py = 200;
	float h = 60;

	while (notQuit) {
		if (isTrigger(KEY_SPACE)) { hp = hpMax; }
		if (hp > 0) { hp -= 2; }

		if (hp > hpWarning) {
			color = green;
		}
		else if (hp > hpDanger) {
			color = yellow;
		}
		else {
			color = red;
		}
		clear(74, 84, 89);
		fill(128);
		rect(px, py, hpMax, h);
		fill(color);
		rect(px, py, hp, h);
		if (hp <= 0) {
			textSize(100);
			fill(255, 0, 0);
			text("Game Over", 700, 400);
		}
	}
}
*/

/*
#include"libOne.h"
void gmain() {
	window(1920, 1080, full);
	//データ
	int life = 5;
	float px = 700;
	float py = 200;
	float radius = 50;
	float space = 100;
	while (notQuit) {
		//データ更新
		if (isTrigger(KEY_A)) { life--; }
		if (isTrigger(KEY_D)) { life++; }
		//描画
		clear(74, 84, 89);
		fill(255, 255, 0);
		print((let)"life=" + life);
		strokeWeight(20);
		stroke(255);
		//whileバージョン
		int i = 0;
		fill(255, 200, 200);
		while (i < life) {
			float offsetX = space * i;
			circle(px + offsetX, py, radius * 2);
			i++;
		}
		//forバージョン
		fill(160, 200, 240);
		for (int i = 0; i < life; i++) {
			float offsetX = space * i;
			float offsetY = space * 2;
			circle(px + offsetX, py + offsetY, radius * 2);
		}
	}
}
*/

/*
#include"libOne.h"
void gmain() {
	window(1920, 1080, full);
	float px = 1920 / 2;
	float py = 1080 / 2;
	float vx = 10;
	float radius = 150;
	float len = radius / 1.4142f * 2;
	float sw = radius / 8;
	float angle = 0;
	float angleSpeed = 0.03f;

	while (notQuit) {
		px += vx;
		angle += angleSpeed;
		if (px < 0 || px > 1920) {
			vx = -vx;
			angleSpeed = -angleSpeed;
		}
		clear(60);
		strokeWeight(sw);
		stroke(255, 0, 0);
		circle(px, py, radius * 2);
		rectMode(CENTER);
		rect(px, py, len, len, angle);
		strokeWeight(sw * 4);
		point(px, py);
		strokeWeight(sw);
		line(1920 / 2, 0, px, py);
	}
	pause();
}
*/