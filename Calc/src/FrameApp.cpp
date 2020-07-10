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
    btn7->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FrameApp::OnBtnClick), NULL, this);
    row1Sizer->Add(btn7, 1, wxALL | wxEXPAND, 2);
    wxButton* btn8 = new wxButton((wxWindow*)this, wxID_ANY, wxT("8"), wxDefaultPosition, wxDefaultSize, 0);
    btn8->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FrameApp::OnBtnClick), NULL, this);
    row1Sizer->Add(btn8, 1, wxALL | wxEXPAND, 2);
    wxButton* btn9 = new wxButton((wxWindow*)this, wxID_ANY, wxT("9"), wxDefaultPosition, wxDefaultSize, 0);
    btn9->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FrameApp::OnBtnClick), NULL, this);
    row1Sizer->Add(btn9, 1, wxALL | wxEXPAND, 2);
    mainSizer->Add(row1Sizer, 1, wxALL | wxEXPAND, 2);
    

    wxBoxSizer* row2Sizer = new wxBoxSizer(wxHORIZONTAL);
    wxButton* btn4 = new wxButton((wxWindow*)this, wxID_ANY, wxT("4"), wxDefaultPosition, wxDefaultSize, 0);
    btn4->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FrameApp::OnBtnClick), NULL, this);
    row2Sizer->Add(btn4, 1, wxALL | wxEXPAND, 2);
    wxButton* btn5 = new wxButton((wxWindow*)this, wxID_ANY, wxT("5"), wxDefaultPosition, wxDefaultSize, 0);
    btn5->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FrameApp::OnBtnClick), NULL, this);
    row2Sizer->Add(btn5, 1, wxALL | wxEXPAND, 2);
    wxButton* btn6 = new wxButton((wxWindow*)this, wxID_ANY, wxT("6"), wxDefaultPosition, wxDefaultSize, 0);
    btn6->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FrameApp::OnBtnClick), NULL, this);
    row2Sizer->Add(btn6, 1, wxALL | wxEXPAND, 2);
    mainSizer->Add(row2Sizer, 1, wxALL | wxEXPAND, 2);

    wxBoxSizer* row3Sizer = new wxBoxSizer(wxHORIZONTAL);
    wxButton* btn1 = new wxButton((wxWindow*)this, wxID_ANY, wxT("1"), wxDefaultPosition, wxDefaultSize, 0);
    btn1->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FrameApp::OnBtnClick), NULL, this);
    row3Sizer->Add(btn1, 1, wxALL | wxEXPAND, 2);
    wxButton* btn2 = new wxButton((wxWindow*)this, wxID_ANY, wxT("2"), wxDefaultPosition, wxDefaultSize, 0);
    btn2->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FrameApp::OnBtnClick), NULL, this);
    row3Sizer->Add(btn2, 1, wxALL | wxEXPAND, 2);
    wxButton* btn3 = new wxButton((wxWindow*)this, wxID_ANY, wxT("3"), wxDefaultPosition, wxDefaultSize, 0);
    btn3->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FrameApp::OnBtnClick), NULL, this);
    row3Sizer->Add(btn3, 1, wxALL | wxEXPAND, 2);
    mainSizer->Add(row3Sizer, 1, wxALL | wxEXPAND, 2);

    wxBoxSizer* row4Sizer = new wxBoxSizer(wxHORIZONTAL);
    wxButton* btnPM = new wxButton((wxWindow*)this, wxID_ANY, wxT("+/-"), wxDefaultPosition, wxDefaultSize, 0);
    btnPM->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FrameApp::OnBtnClick), NULL, this);
    row4Sizer->Add(btnPM, 1, wxALL | wxEXPAND, 2);
    wxButton* btn0 = new wxButton((wxWindow*)this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
    btn0->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FrameApp::OnBtnClick), NULL, this);
    row4Sizer->Add(btn0, 1, wxALL | wxEXPAND, 2);
    wxButton* btnD = new wxButton((wxWindow*)this, wxID_ANY, wxT(","), wxDefaultPosition, wxDefaultSize, 0);
    btnD->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FrameApp::OnBtnClick), NULL, this);
    row4Sizer->Add(btnD, 1, wxALL | wxEXPAND, 2);
    mainSizer->Add(row4Sizer, 1, wxALL | wxEXPAND, 2);

    SetSizer(mainSizer);
}

void FrameApp::OnBtnClick(wxCommandEvent& event)
{
    string labelBtn = string(((wxButton*)event.GetEventObject())->GetLabel().mb_str());

    if (labelBtn == "1") Enter("1");
    else if (labelBtn == "2") Enter("2");
    else if (labelBtn == "3") Enter("3");
    else if (labelBtn == "4") Enter("4");
    else if (labelBtn == "5") Enter("5");
    else if (labelBtn == "6") Enter("6");
    else if (labelBtn == "7") Enter("7");
    else if (labelBtn == "8") Enter("8");
    else if (labelBtn == "9") Enter("9");
    else if (labelBtn == "0") Enter("0");
    else if (labelBtn == ",") Enter(",");
}

void FrameApp::OnKeyDown(wxKeyEvent& event)
{
    int key = event.GetKeyCode();
    if (key == WXK_NUMPAD1 || key == 49) Enter("1");
    else if (key == WXK_NUMPAD2 || key == 50) Enter("2");
    else if (key == WXK_NUMPAD3 || key == 51) Enter("3");
    else if (key == WXK_NUMPAD4 || key == 52) Enter("4");
    else if (key == WXK_NUMPAD5 || key == 53) Enter("5");
    else if (key == WXK_NUMPAD6 || key == 54) Enter("6");
    else if (key == WXK_NUMPAD7 || key == 55) Enter("7");
    else if (key == WXK_NUMPAD8 || key == 56) Enter("8");
    else if (key == WXK_NUMPAD9 || key == 57) Enter("9");
    else if (key == WXK_NUMPAD0 || key == 48) Enter("0");
    else if (key == WXK_NUMPAD_SEPARATOR || key == 188) Enter(",");
}

void FrameApp::Enter(const char* value)
{
    if (value == "1")
    {
        bufer.append("1");
        calcEdit->SetValue(bufer);
        Parse(bufer);
    }
    else if (value == "2")
    {
        bufer.append("2");
        calcEdit->SetValue(bufer);
        Parse(bufer);
    }
    else if (value == "3")
    {
        bufer.append("3");
        calcEdit->SetValue(bufer);
        Parse(bufer);
    }
    else if (value == "4")
    {
        bufer.append("4");
        calcEdit->SetValue(bufer);
        Parse(bufer);
    }
    else if (value == "5")
    {
        bufer.append("5");
        calcEdit->SetValue(bufer);
        Parse(bufer);
    }
    else if (value == "6")
    {
        bufer.append("6");
        calcEdit->SetValue(bufer);
        Parse(bufer);
    }
    else if (value == "7")
    {
        bufer.append("7");
        calcEdit->SetValue(bufer);
        Parse(bufer);
    }
    else if (value == "8")
    {
        bufer.append("8");
        calcEdit->SetValue(bufer);
        Parse(bufer);
    }
    else if (value == "9")
    {
        bufer.append("9");
        calcEdit->SetValue(bufer);
        Parse(bufer);
    }
    else if (value == "0")
    {
        bufer.append("0");
        calcEdit->SetValue(bufer);
        Parse(bufer);
    }
    else if (value == ",")
    {
        bufer.append(",");
        calcEdit->SetValue(bufer);
        Parse(bufer);
    }


}

void FrameApp::Parse(string input)
{
    vector<Token> tokens = Lexer(input).LexParse();
}