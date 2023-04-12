#pragma once
#include "main.h"

class Point {
private:
	int x;
	int y;
public:
	Point();
	Point(int value1, int value2);

	int get_x();
	void set_x(int value);
	int get_y();
	void set_y(int value);

	Point sum(Point point);
	Point sub(Point point);
	Point mul(int value);


	Point static operator +(Point p1, Point p2) {
		int x = p1.x + p2.x;
		int y = p1.y + p2.y;
			return Point(x, y);
	}


	Point static operator +(Point p1, Point p2) {
		int x = p1.x - p2.x;
		int y = p1.y - p2.y;
		return Point(x, y);
	}
	Point static operator -(Point p1, int value) {
		int x = point.x - p2.x;
		int y = point.y - p2.y;
		return Point(x, y);
	}
	Point static operator +(Point point) {
		int x = -point.x;
		int y = -point.y;
		return Point(-point.x, -point.y);
	}

	string info();
};








