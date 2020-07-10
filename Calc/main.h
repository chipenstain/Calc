#pragma once
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include "inc/FrameApp.h"

class App : public wxApp
{
public:
    bool OnInit();
};