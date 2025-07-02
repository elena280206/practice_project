#pragma once

using namespace System::Drawing;

namespace Figures {
    public ref class Figure abstract {
    public:
        Figure() {}
        virtual void Draw(Graphics^ g) abstract;
        virtual void Hide(Graphics^ g) abstract;
        virtual void Move(int newX, int newY) abstract;
    };
}
