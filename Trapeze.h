#pragma once
#include "Figure.h"

namespace Figures {

    public ref class Trapeze : public Figure {
    private:
        int x, y, height, widthL, widthT;
        Color bgColor, borderColor;
    public:
        Trapeze(int x, int y, int height, int widthL, int widthT, Color bgColor, Color borderColor)
            : x(x), y(y), height(height), widthL(widthL), widthT(widthT), bgColor(bgColor), borderColor(borderColor) {
        }

        virtual void Draw(Graphics^ g) override;
        virtual void Hide(Graphics^ g) override;
        virtual void Move(int newX, int newY) override;
    };
}
