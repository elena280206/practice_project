#pragma once

// Используйте директивы using namespace для указания пространств имен
using namespace System::Drawing;
using namespace System::Collections::Generic;
#include "Figure.h"

namespace Figures {

    public ref class FiguresList {
    private:
        List<Figure^>^ figures;
    public:
        FiguresList() : figures(gcnew List<Figure^>()) {}

        void AddFigures(List<Figure^>^ figs);
        void DisplayAll(Graphics^ g);
        void Hide(Graphics^ g);
        void ClearAll();
    };
}
