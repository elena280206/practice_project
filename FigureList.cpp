#include "FigureList.h"

namespace Figures {

    void FiguresList::AddFigures(List<Figure^>^ figs) {
        for each (Figure ^ fig in figs) {
            figures->Add(fig);
        }
    }

    void FiguresList::DisplayAll(Graphics^ g) {
        for each (Figure ^ fig in figures) {
            fig->Draw(g);
        }
    }

    void FiguresList::Hide(Graphics^ g) {
        for each (Figure ^ figure in figures) {
            figure->Hide(g);
        }
    }

    void FiguresList::ClearAll() {
        figures->Clear();
    }
}
