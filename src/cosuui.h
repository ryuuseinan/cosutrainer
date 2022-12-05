// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef cosuui_h
#define cosuui_h
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Check_Button.H>
#include <FL/Fl_Round_Button.H>
#include <FL/Fl_Spinner.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Slider.H>
#include <FL/Fl_Value_Input.H>
#include <FL/Fl_Progress.H>

class CosuUI
{
public:
   Fl_Window* make_window();
   Fl_Window *window;
   Fl_Group *mainbox;
   Fl_Box *infobox;
   Fl_Choice *flipbox;
   static Fl_Menu_Item menu_flipbox[];
   static Fl_Menu_Item *no_flip;
   static Fl_Menu_Item *x_flip;
   static Fl_Menu_Item *y_flip;
   static Fl_Menu_Item *transpose;
   Fl_Check_Button *scale_ar;
   Fl_Check_Button *scale_od;
   Fl_Check_Button *pitch;
   Fl_Round_Button *rate;
   Fl_Round_Button *bpm;
   Fl_Spinner *speedval;
   Fl_Check_Button *lock;
   Fl_Check_Button *hplock;
   Fl_Check_Button *cslock;
   Fl_Check_Button *arlock;
   Fl_Check_Button *odlock;
   Fl_Button *reset;
   Fl_Button *convert;
   Fl_Box *songtitlelabel;
   Fl_Box *difflabel;
   Fl_Group *diffgroup;
   Fl_Slider *hpslider;
   Fl_Slider *csslider;
   Fl_Slider *arslider;
   Fl_Slider *odslider;
   Fl_Value_Input *hpinput;
   Fl_Value_Input *csinput;
   Fl_Value_Input *arinput;
   Fl_Value_Input *odinput;
   Fl_Progress *progress;
};
#endif
