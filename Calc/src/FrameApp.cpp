#include "../inc/FrameApp.h"

FrameApp::FrameApp(const wxString& title, const wxPoint& pos, const wxSize & size) : wxFrame((wxFrame*)NULL, -1, title, pos, size)
{
    wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);

    calcEdit = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(-1, 60), wxTE_READONLY | wxTE_RIGHT | wxBORDER_RAISED);
    calcEdit->SetFont(wxFont(25, wxFONTFAMILY_ROMAN, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Bodoni MT")));
    mainSizer->Add(calcEdit, 0, wxEXPAND);

    wxStaticLine* calcEditBorder = new wxStaticLine(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL);
    mainSizer->Add(calcEditBorder, 0, wxEXPAND | wxBOTTOM, 5);

    wxBoxSizer* row1Sizer = new wxBoxSizer(wxHORIZONTAL);
    wxButton* btn7 = new wxButton((wxWindow*)this, wxID_ANY, wxT("7"), wxDefaultPosition, wxDefaultSize, 0);
    btn7->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FrameApp::btnOnClick), NULL, this);
    row1Sizer->Add(btn7, 1, wxALL | wxEXPAND, 2);
    wxButton* btn8 = new wxButton((wxWindow*)this, wxID_ANY, wxT("8"), wxDefaultPosition, wxDefaultSize, 0);
    btn8->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FrameApp::btnOnClick), NULL, this);
    row1Sizer->Add(btn8, 1, wxALL | wxEXPAND, 2);
    wxButton* btn9 = new wxButton((wxWindow*)this, wxID_ANY, wxT("9"), wxDefaultPosition, wxDefaultSize, 0);
    btn9->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FrameApp::btnOnClick), NULL, this);
    row1Sizer->Add(btn9, 1, wxALL | wxEXPAND, 2);
    mainSizer->Add(row1Sizer, 1, wxALL | wxEXPAND, 2);
    

    wxBoxSizer* row2Sizer = new wxBoxSizer(wxHORIZONTAL);
    wxButton* btn4 = new wxButton((wxWindow*)this, wxID_ANY, wxT("4"), wxDefaultPosition, wxDefaultSize, 0);
    btn4->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FrameApp::btnOnClick), NULL, this);
    row2Sizer->Add(btn4, 1, wxALL | wxEXPAND, 2);
    wxButton* btn5 = new wxButton((wxWindow*)this, wxID_ANY, wxT("5"), wxDefaultPosition, wxDefaultSize, 0);
    btn5->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FrameApp::btnOnClick), NULL, this);
    row2Sizer->Add(btn5, 1, wxALL | wxEXPAND, 2);
    wxButton* btn6 = new wxButton((wxWindow*)this, wxID_ANY, wxT("6"), wxDefaultPosition, wxDefaultSize, 0);
    btn6->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FrameApp::btnOnClick), NULL, this);
    row2Sizer->Add(btn6, 1, wxALL | wxEXPAND, 2);
    mainSizer->Add(row2Sizer, 1, wxALL | wxEXPAND, 2);

    wxBoxSizer* row3Sizer = new wxBoxSizer(wxHORIZONTAL);
    wxButton* btn1 = new wxButton((wxWindow*)this, wxID_ANY, wxT("1"), wxDefaultPosition, wxDefaultSize, 0);
    btn1->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FrameApp::btnOnClick), NULL, this);
    row3Sizer->Add(btn1, 1, wxALL | wxEXPAND, 2);
    wxButton* btn2 = new wxButton((wxWindow*)this, wxID_ANY, wxT("2"), wxDefaultPosition, wxDefaultSize, 0);
    btn2->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FrameApp::btnOnClick), NULL, this);
    row3Sizer->Add(btn2, 1, wxALL | wxEXPAND, 2);
    wxButton* btn3 = new wxButton((wxWindow*)this, wxID_ANY, wxT("3"), wxDefaultPosition, wxDefaultSize, 0);
    btn3->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FrameApp::btnOnClick), NULL, this);
    row3Sizer->Add(btn3, 1, wxALL | wxEXPAND, 2);
    mainSizer->Add(row3Sizer, 1, wxALL | wxEXPAND, 2);

    wxBoxSizer* row4Sizer = new wxBoxSizer(wxHORIZONTAL);
    wxButton* btnPM = new wxButton((wxWindow*)this, wxID_ANY, wxT("+/-"), wxDefaultPosition, wxDefaultSize, 0);
    btnPM->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FrameApp::btnOnClick), NULL, this);
    row4Sizer->Add(btnPM, 1, wxALL | wxEXPAND, 2);
    wxButton* btn0 = new wxButton((wxWindow*)this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
    btn0->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FrameApp::btnOnClick), NULL, this);
    row4Sizer->Add(btn0, 1, wxALL | wxEXPAND, 2);
    wxButton* btnD = new wxButton((wxWindow*)this, wxID_ANY, wxT(","), wxDefaultPosition, wxDefaultSize, 0);
    btnD->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FrameApp::btnOnClick), NULL, this);
    row4Sizer->Add(btnD, 1, wxALL | wxEXPAND, 2);
    mainSizer->Add(row4Sizer, 1, wxALL | wxEXPAND, 2);

    SetSizer(mainSizer);
}

void FrameApp::btnOnClick(wxCommandEvent& event)
{
    wxButton* btn = (wxButton*)event.GetEventObject();

    if (btn->GetLabel() == "1")
    {
        Enter("1");
    }
    else if (btn->GetLabel() == "2")
    {
        Enter("2");
    }
    else if (btn->GetLabel() == "3")
    {
        Enter("3");
    }
    else if (btn->GetLabel() == "4")
    {
        Enter("4");
    }
    else if (btn->GetLabel() == "5")
    {
        Enter("5");
    }
    else if (btn->GetLabel() == "6")
    {
        Enter("6");
    }
    else if (btn->GetLabel() == "7")
    {
        Enter("7");
    }
    else if (btn->GetLabel() == "8")
    {
        Enter("8");
    }
    else if (btn->GetLabel() == "9")
    {
        Enter("9");
    }
    else if (btn->GetLabel() == "0")
    {
        Enter("0");
    }
    else if (btn->GetLabel() == ",")
    {
        Enter(",");
    }
}

void FrameApp::OnKeyDown(wxKeyEvent& event)
{
    switch ( event.GetKeyCode() )
    {
    case WXK_NUMPAD1:
        Enter("1");
        break;
    case WXK_NUMPAD2:
        Enter("2");
        break;
    case WXK_NUMPAD3:
        Enter("3");
        break;
    case WXK_NUMPAD4:
        Enter("4");
        break;
    case WXK_NUMPAD5:
        Enter("5");
        break;
    case WXK_NUMPAD6:
        Enter("6");
        break;
    case WXK_NUMPAD7:
        Enter("7");
        break;
    case WXK_NUMPAD8:
        Enter("8");
        break;
    case WXK_NUMPAD9:
        Enter("9");
        break;
    case WXK_NUMPAD0:
        Enter("0");
        break;
    case WXK_NUMPAD_SEPARATOR:
        Enter(",");
        break;
    }
}

void FrameApp::Enter(const char* value)
{
    if (value == "1")
    {
        BUFER.append("1");
        CalcEditUpdate(BUFER);
    }
    else if (value == "2")
    {
        BUFER.append("2");
        CalcEditUpdate(BUFER);
    }
    else if (value == "3")
    {
        BUFER.append("3");
        CalcEditUpdate(BUFER);
    }
    else if (value == "4")
    {
        BUFER.append("4");
        CalcEditUpdate(BUFER);
    }
    else if (value == "5")
    {
        BUFER.append("5");
        CalcEditUpdate(BUFER);
    }
    else if (value == "6")
    {
        BUFER.append("6");
        CalcEditUpdate(BUFER);
    }
    else if (value == "7")
    {
        BUFER.append("7");
        CalcEditUpdate(BUFER);
    }
    else if (value == "8")
    {
        BUFER.append("8");
        CalcEditUpdate(BUFER);
    }
    else if (value == "9")
    {
        BUFER.append("9");
        CalcEditUpdate(BUFER);
    }
    else if (value == "0")
    {
        BUFER.append("0");
        CalcEditUpdate(BUFER);
    }
    else if (value == ",")
    {
        BUFER.append(",");
        CalcEditUpdate(BUFER);
    }
}

void FrameApp::CalcEditUpdate(std::string bufer)
{
    calcEdit->SetValue(bufer);
}

void FrameApp::ParseBUFER(string bufer)
{

}