#ifndef __KEYBINDINGSTAB_H__
#define __KEYBINDINGSTAB_H__

#include <QtWidgets>


//
struct KeyBindings
{
	size_t KBType;
	const char *KBNameSetting;
	const char *KBNameLabel;
	const char *KBPlaceholderText;
	const char *KBDefaultValue;
	QLabel *KBLabel;
	QLineEdit *KBLineEdit;
};


// 
enum
{
	KB_TYPEGENERAL = 0,
	KB_TYPEDEBUGGER = 1,
	KB_TYPEALPINE = 2
};

// List the keybindings used for the settings
enum
{
	KB_START = 0,
	KBQUIT = 0,
	KBPICKFILE,
	KBCONFIGURE,
	KBEMUSTATUS,
	KBPAUSE,
	KBFRAMEADVANCE,
	KBFULLSCREEN,
	KBSCREENSHOT,
	KBRESTART,
	KBSTEPINTO,
	KBSTEPOVER,
	KBFUNCTIONBREAKPOINT,
	KBBREAKPOINTS,
	KBDELETEALLBREAKPOINTS,
	KB_END
};


// 
class KeyBindingsTab: public QWidget
{
	Q_OBJECT

	public:
		KeyBindingsTab(QWidget * parent = 0);
		~KeyBindingsTab();
		void SetSettings(void);
		void GetSettings(void);
};


//
extern	KeyBindings KeyBindingsTable[KB_END];


#endif	// __KEYBINDINGSTAB_H__
