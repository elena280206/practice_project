#include "Trapeze.h"

namespace Figures {

    void Trapeze::Draw(Graphics^ g) {
        array<Point>^ points = gcnew array<Point>(4);
        points[0] = Point(x, y);
        points[1] = Point(x, y + height);
        points[2] = Point(x + widthL, y + height);
        points[3] = Point(x + widthT, y);

        SolidBrush^ brush = gcnew SolidBrush(bgColor);
        Pen^ pen = gcnew Pen(borderColor, 3);
        g->FillPolygon(brush, points);
        g->DrawPolygon(pen, points);
    }

    void Trapeze::Hide(Graphics^ g) {
        array<Point>^ points = gcnew array<Point>(4);
        points[0] = Point(x, y);
        points[1] = Point(x, y + height);
        points[2] = Point(x + widthL, y + height);
        points[3] = Point(x + widthT, y);

        SolidBrush^ brush = gcnew SolidBrush(Color::White);
        Pen^ pen = gcnew Pen(Color::White, 3);
        g->FillPolygon(brush, points);
        g->DrawPolygon(pen, points);
    }

    void Trapeze::Move(int newX, int newY) {
        x = newX;
        y = newY;
    }
}
