#include "Complex.h"

namespace Figures {

    void Complex::Draw(Graphics^ g) {
        triangle->Draw(g);
        trapeze->Draw(g);
    }

    void Complex::Hide(Graphics^ g) {
        triangle->Hide(g);
        trapeze->Hide(g);
    }

    void Complex::Move(int newX, int newY) {
        triangle->Move(newX, newY);
        trapeze->Move(newX, newY);
    }
}
