#include "main.h"

wxIMPLEMENT_APP(App);

bool App::OnInit()
{
    FrameApp* frame = new FrameApp(wxT("Calc"), wxDefaultPosition, wxSize(400, 550));
    frame->SetSizeHints(wxSize(400, 550), wxSize(400, 550));
    frame->Show(true);

    this->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(FrameApp::OnKeyDown));
    return true;
}