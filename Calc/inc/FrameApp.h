#pragma once
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include <wx/statline.h>

#include "includes.h"
#include "calcParser/Lexer.h"
#include "calcParser/Token.h"

using namespace calcParser;

class FrameApp : public wxFrame
{
public:
    string bufer;

    wxTextCtrl* calcEdit;

    FrameApp(const wxString& title, const wxPoint& pos, const wxSize& size);
    void OnBtnClick(wxCommandEvent& event);
    void OnKeyDown(wxKeyEvent& event);
    void Enter(const char* value);
    void Parse(string input);
};