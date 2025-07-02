#pragma once
#include "Figure.h"
#include "Triangle.h"
#include "Trapeze.h"

namespace Figures {

    public ref class Complex : public Figure {
    private:
        Figure^ triangle;
        Figure^ trapeze;
    public:
        Complex(Figure^ t, Figure^ tr) : triangle(t), trapeze(tr) {}

        virtual void Draw(Graphics^ g) override;
        virtual void Hide(Graphics^ g) override;
        virtual void Move(int newX, int newY) override;
    };
}
