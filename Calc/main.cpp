#include "main.h"

wxIMPLEMENT_APP(App);

bool App::OnInit()
{
    FrameApp* frame = new FrameApp(wxT("Calc"), wxDefaultPosition, wxSize(400, 550));
    frame->SetSizeHints(wxSize(400, 550), wxSize(400, 550));
    frame->Show(true);

    this->Bind(wxEVT_KEY_DOWN, &FrameApp::OnKeyDown, frame);
    return true;
}