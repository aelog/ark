/*

 $Id$

 ark -- archiver for the KDE project

 Copyright (C)

 1997-1999: Rob Palmbos palm9744@kettering.edu
 1999: Francois-Xavier Duranceau duranceau@kde.org

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/

#ifndef SHELL_OUTPUT_DLG_H
#define SHELL_OUTPUT_DLG_H

#include <kdialogbase.h>

class QWidget;
class QString;
class Q3TextEdit;

class ShellOutputDlg : public KDialogBase
{
	Q_OBJECT
	public:
		ShellOutputDlg( const QString& text, QWidget *parent=0, const char *name=0 );
		~ShellOutputDlg();
	private:
		Q3TextEdit * m_outputViewer;
};

#endif /* SHELL_OUTPUT_DLG_H */

