#pragma once
#include "cosuui.h"
#ifdef WIN32
#include "freader_win.h"
#else
#include "freader.h"
#endif

class CosuWindow
{
private:
    CosuUI cosuui;
    Freader fr;
    static void bpmradio_callb(Fl_Widget *w, void *data);
    static void rateradio_callb(Fl_Widget *w, void *data);
    static void resetbtn_callb(Fl_Widget *w, void *data);
    static void convbtn_callb(Fl_Widget *w, void *data);
    static void diffch_callb(Fl_Widget *w, void *data);

    bool done;
    float progress;
    std::thread *cur;
    static void thr_convmap(CosuWindow *win);
public:
    void start();
};
