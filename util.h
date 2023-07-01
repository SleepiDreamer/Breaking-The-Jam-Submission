#pragma once
#include <iostream>
#include "template.h"

namespace Tmpl8
{
	int nthDigit(const int number, const int n);

	float distanceBetween(const float x1, const float y1, const float x2, const float y2);
	inline float distanceBetween(const vec2& pos1, const vec2& pos2)
	{
		return distanceBetween(pos1.x, pos1.y, pos2.x, pos2.y);
	}

	float distanceBetweenSquared(const vec2 a, const vec2 b);

	int distanceBetweenSquaredFast(int x1, int y1, int x2, int y2);

	/**
	 * \brief returns the direction (in radians) someone at p1 should point towards if it were to look at p2
	 * \param x1  your x
	 * \param y1  your y
	 * \param x2  target x
	 * \param y2  target y
	 */
	float RotationBetweenPoints(const float x1, const float y1, const float x2, const float y2);
	inline float RotationBetweenPoints(const vec2& pos1, const vec2& pos2)
	{
		return RotationBetweenPoints(pos1.x, pos1.y, pos2.x, pos2.y);
	}

	const vec2& calcDir(const vec2& _vel);

	float calcSpeed(const vec2& _vel);

	vec2 reflectVector(const vec2& _vel, const vec2& _normal);

	float vec2ToAngle(const vec2& _vel);

	int randint(int _min, int _max);

	float randfloat(float _min, float _max);

	bool insideScreen(vec2 _pos);

	bool insideRectangle(vec2 _point, vec2 _pos1, vec2 _pos2);

	float roundNumber(float _number, int _dec);

	std::string readNthLine(const std::string& _filename, int _n);

	void writeToFile(const std::string& _filename, int _score);

	float distanceToRect(double x, double y, double x_min, double y_min, double x_max, double y_max);

	float distanceToRect(vec2 _point, vec2 _pos1, vec2 _pos2);

	int rgbCombine(int r, int g, int b);
}