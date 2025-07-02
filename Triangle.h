#pragma once
#include "Figure.h"

namespace Figures {

    public ref class Triangle : public Figure {
    private:
        int x, y, height, width;
        Color bgColor, borderColor;
    public:
        Triangle(int x, int y, int height, int width, Color bgColor, Color borderColor)
            : x(x), y(y), height(height), width(width), bgColor(bgColor), borderColor(borderColor) {
        }

        virtual void Draw(Graphics^ g) override;
        virtual void Hide(Graphics^ g) override;
        virtual void Move(int newX, int newY) override;
    };
}
