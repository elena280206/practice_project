#include "Triangle.h"

namespace Figures {

    void Triangle::Draw(Graphics^ g) {
        array<Point>^ points = gcnew array<Point>(3);
        points[0] = Point(x, y);
        points[1] = Point(x, y + height);
        points[2] = Point(x + width, y + height);

        SolidBrush^ brush = gcnew SolidBrush(bgColor);
        Pen^ pen = gcnew Pen(borderColor, 3);
        g->FillPolygon(brush, points);
        g->DrawPolygon(pen, points);
    }

    void Triangle::Hide(Graphics^ g) {
        array<Point>^ points = gcnew array<Point>(3);
        points[0] = Point(x, y);
        points[1] = Point(x, y + height);
        points[2] = Point(x + width, y + height);

        SolidBrush^ brush = gcnew SolidBrush(Color::White);
        Pen^ pen = gcnew Pen(Color::White, 3);
        g->FillPolygon(brush, points);
        g->DrawPolygon(pen, points);
    }

    void Triangle::Move(int newX, int newY) {
        x = newX;
        y = newY;
    }
}
