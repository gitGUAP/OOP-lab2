#pragma once

#include "shape.hpp" 

class Circle : public virtual Shape
{
public:
	Circle(uint32_t x, uint32_t y, uint32_t radius): _center(x,y), _r(radius) {}

	virtual void draw(Screen* screen) const
	{
		screen->putPoint(_center);
	}

	virtual void move(Point p)
	{
	}

	Point getLeftTop() const
	{
		return Point(_center);
	}

	Point getRightTop() const
	{
		return Point(_center);
	}

	Point getLeftBottom() const
	{
		return Point(_center);
	}

	Point getRightBottom() const
	{
		return Point(_center);
	}

	virtual ~Circle()
	{
	}

protected:
	Point _center;
	uint32_t _r;
};
