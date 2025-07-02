#pragma once

#include "Triangle.h"
#include "Trapeze.h"
#include "Complex.h"
#include "FigureList.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Collections::Generic;
using namespace Figures;

namespace FiguresApp {

    public ref class MainForm : public System::Windows::Forms::Form {
    public:
        MainForm(void) {
            InitializeComponent();
        }

    protected:
        ~MainForm() {
            if (components) {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Timer^ timer;
        System::ComponentModel::Container^ components;
        FiguresList^ figuresList;
        int currentFigureIndex;

        void InitializeComponent() {
            this->components = gcnew System::ComponentModel::Container();
            this->timer = gcnew System::Windows::Forms::Timer(components);
            this->timer->Interval = 1000;
            this->timer->Tick += gcnew System::EventHandler(this, &MainForm::OnTimerTick);

            this->figuresList = gcnew FiguresList();
            this->currentFigureIndex = 0;

            Triangle^ triangle = gcnew Triangle(50, 50, 100, 100, Color::Purple, Color::White);
            Trapeze^ trapeze = gcnew Trapeze(200, 50, 100, 150, 75, Color::Red, Color::White);

            Figure^ triPart = gcnew Triangle(350, 50, 100, 100, Color::Cyan, Color::Black);
            Figure^ trapPart = gcnew Trapeze(350, 150, 100, 150, 75, Color::Blue, Color::Black);
            Complex^ complexFig = gcnew Complex(triPart, trapPart);

            List<Figure^>^ figures = gcnew List<Figure^>();
            figures->Add(triangle);
            figures->Add(trapeze);
            figures->Add(complexFig);

            this->figuresList->AddFigures(figures);

            this->ClientSize = System::Drawing::Size(800, 600);
            this->Text = "Figures Application";
            this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::MainForm_Paint);
            this->timer->Start();
        }

        void OnTimerTick(Object^ sender, EventArgs^ e) {
            this->Refresh();
            if (currentFigureIndex < 3) {
                List<Figure^>^ figures = gcnew List<Figure^>();
                figures->Add(gcnew Triangle(100 + currentFigureIndex * 50, 100, 50, 50, Color::Green, Color::Black));
                figuresList->AddFigures(figures);
                currentFigureIndex++;
            }
        }

        void MainForm_Paint(Object^ sender, PaintEventArgs^ e) {
            Graphics^ g = e->Graphics;
            figuresList->DisplayAll(g);
        }
    };
}
