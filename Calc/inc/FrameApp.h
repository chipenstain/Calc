#pragma once
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include <wx/statline.h>
#include <string>
#include <regex>
#include <vector>

using namespace std;

class FrameApp : public wxFrame
{
public:
    FrameApp(const wxString& title, const wxPoint& pos, const wxSize& size);

    wxTextCtrl* calcEdit;

    string BUFER = "";
    vector<string> OPERATIONS;

    void btnOnClick(wxCommandEvent& event);
    void OnKeyDown(wxKeyEvent& event);
    void Enter(const char* value);
    void CalcEditUpdate(string bufer);
    void ParseBUFER(string bufer);
};