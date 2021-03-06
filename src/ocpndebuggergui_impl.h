/******************************************************************************
 * $Id: ocpndebuggergui_impl.h,v 1.0 2011/02/26 01:54:37 nohal Exp $
 *
 * Project:  OpenCPN
 * Purpose:  OpenCPNDebugger Plugin
 * Author:   Pavel Kalian
 *
 ***************************************************************************
 *   Copyright (C) 2012 by Pavel Kalian   *
 *   $EMAIL$   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,  USA.             *
 ***************************************************************************
 */

#ifndef _OpenCPNDEBUGGERGUI_IMPL_H_
#define _OpenCPNDEBUGGERGUI_IMPL_H_

#include "ocpndebugger_pi.h"
#include "ocpndebuggergui.h"

class OpenCPNDebuggerDlgImpl : public OpenCPNDebuggerDlg {
   public:
    OpenCPNDebuggerDlgImpl(wxWindow *parent, wxWindowID id = wxID_ANY,
                           const wxString &title = _("OpenCPN Debugger"),
                           const wxPoint &pos = wxDefaultPosition,
                           const wxSize &size = wxSize(701, 370),
#ifdef __WXMAC__
                           long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxSTAY_ON_TOP);
#else
                           long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
#endif
    void SetGPSMessage(wxString &msg);
    void SetNMEAEvent(wxString &msg);
    void SetAISMessage(wxString &msg);
    void SetPluginMessage(wxString &id, wxString &msg);
    void SetSignalKMessage(wxString &msg);
};

#endif
