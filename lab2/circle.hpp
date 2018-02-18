#pragma once

#include "shape.hpp" 

class Circle : public virtual Shape
{
public:
	Circle(const Point& leftTop, const Point& rightBottom)
	{
	}

	virtual void draw(Screen* screen) const
	{
	}

	virtual void move(Point p)
	{
	}

	Point getLeftTop() const
	{
	}

	Point getRightTop() const
	{
	}

	Point getLeftBottom() const
	{
	}

	Point getRightBottom() const
	{
	}

	virtual ~Circle()
	{
	}

protected:
	
};
