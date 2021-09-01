#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;
struct S_Point
{
	float x, y;
	S_Point(float x, float y) : x(x), y(y) {}
};

int main()
{
	RenderWindow window(VideoMode(1080, 720), "TEST APP");
	S_Point circle_pos(1, 1);

	while (window.isOpen())
	{
		Event event;
		window.clear(Color(154, 205, 50, 250));
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				window.close();
			}
			if (event.type == Event::KeyPressed)
			{
				// Вправо
				/*if (event.key.code == Keyboard::D)
				{
					circle_pos.x++;
				}*/
				// Вниз
				/*if (event.key.code == Keyboard::S)
				{
					circle_pos.y++;
				}*/
			}
		}

		/*CircleShape circle(50.0f);
		circle.setFillColor(Color(230, 0, 120));
		circle.setOutlineThickness(2);
		circle.setOutlineColor(Color(0, 0, 0));

		circle.move(circle_pos.x, circle_pos.y);

		window.draw(circle);
		window.display();*/

		CircleShape circle(50.f);
		circle.setFillColor(Color(230, 0, 230));
		circle.move((1080-100)/2, (720-100)/2);
		window.draw(circle);

		ConvexShape convex1;
		window.draw(convex1);
		RectangleShape rectangle1(Vector2f(20.f, 100.f)); // ВЫСОТА И ШИРИНА ПРЯМОУГОЛЬНИКА
		rectangle1.move((1080 - 1000) / 2, (720 - 100) / 2); // КООРДИНАТЫ РАСПОЛОЖЕНИЯ ПРЯМОУГОЛЬНИКА
		rectangle1.setFillColor(Color(0, 0, 0)); // ЦВЕТ ПРЯМОУГОЛЬНИКА
		window.draw(rectangle1);

		ConvexShape convex2;
		window.draw(convex2);
		RectangleShape rectangle2(Vector2f(20.f, 100.f)); // ВЫСОТА И ШИРИНА ПРЯМОУГОЛЬНИКА
		rectangle2.move((1080 + 990) / 2, (720 - 100) / 2); // КООРДИНАТЫ РАСПОЛОЖЕНИЯ ПРЯМОУГОЛЬНИКА
		rectangle2.setFillColor(Color(0, 0, 0)); // ЦВЕТ ПРЯМОУГОЛЬНИКА
		window.draw(rectangle2);

		window.display();
	}
}