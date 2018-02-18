#pragma once

#include "shape.hpp" 

class Circle : public virtual Shape
{
public:
	Circle(uint32_t x, uint32_t y, uint32_t radius) : _x(x), _y(y), _r(radius) {}

	virtual void draw(Screen* screen) const
	{
		int x1, y1, yk = 0;
		int sigma, delta, f;

		x1 = 0;
		y1 = _r;
		delta = 2 * (1 - _r);

		do
		{
			screen->putPoint(_x + x1, _y + y1);
			screen->putPoint(_x - x1, _y + y1);
			screen->putPoint(_x + x1, _y - y1);
			screen->putPoint(_x - x1, _y - y1);

			f = 0;
			if (y1 < yk)
				break;
			if (delta < 0)
			{
				sigma = 2 * (delta + y1) - 1;
				if (sigma <= 0)
				{
					x1++;
					delta += 2 * x1 + 1;
					f = 1;
				}
			}
			else
				if (delta > 0)
				{
					sigma = 2 * (delta - x1) - 1;
					if (sigma > 0)
					{
						y1--;
						delta += 1 - 2 * y1;
						f = 1;
					}
				}
			if (!f)
			{
				x1++;
				y1--;
				delta += 2 * (x1 - y1 - 1);
			}
		} while (1);
	}

	virtual void move(Point p)
	{
	}

	Point getLeftTop() const
	{
		return Point(_x, _y);
	}

	Point getRightTop() const
	{
		return Point(_x, _y);

	}

	Point getLeftBottom() const
	{
		return Point(_x, _y);

	}

	Point getRightBottom() const
	{
		return Point(_x, _y);

	}

	virtual ~Circle()
	{
	}

protected:
	uint32_t _x, _y, _r;
};
