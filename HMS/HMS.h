#ifndef GUI_H
#define GUI_H
#include <FL/Fl_Input.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl.H>
#include <initializer_list>

//for nuber saveing
extern int number1;
extern int number2;

//for extra button
extern Fl_Box* grade;
extern Fl_Input* input1;
extern Fl_Input* input2;
extern Fl_Box* box1;
extern Fl_Box* box2;
extern Fl_Box* result_box;
extern Fl_Button* confirm_btn;

// Main window
extern Fl_Window* main_window;
extern Fl_Box* welcome_label;

// Panels
extern Fl_Group* panel1;
extern Fl_Group* panel2;
extern Fl_Group* panel3;
extern Fl_Group* panel4;
extern Fl_Group* panel5;

// Extra buttons
//1
extern Fl_Button* extra_btn1_1;
extern Fl_Button* extra_btn1_2;
extern Fl_Button* extra_btn1_3;
extern Fl_Button* extra_btn1_4;
extern Fl_Button* extra_btn1_5;
//2
extern Fl_Button* extra_btn2_1;
extern Fl_Button* extra_btn2_2;
//3
extern Fl_Button* extra_btn3_1;
extern Fl_Button* extra_btn3_2;
extern Fl_Button* extra_btn3_3;
extern Fl_Button* extra_btn3_4;
extern Fl_Button* extra_btn3_5;
extern Fl_Button* extra_btn3_6;
//4
extern Fl_Button* extra_btn4_1;
extern Fl_Button* extra_btn4_2;
extern Fl_Button* extra_btn4_3;
extern Fl_Button* extra_btn4_4;
//5
extern Fl_Button* extra_btn5_1;
extern Fl_Button* extra_btn5_2;
extern Fl_Button* extra_btn5_3;

//functions
void show_only_panel(Fl_Group* target);
void hide_extra_widgets();
void confirm_callback(Fl_Widget* w, void*);
void extra_btn_func(Fl_Widget* widget, void* data);
void hide_all_extra_buttons();
Fl_Button* create_extra_button(int x, int y, int w, int h, const char* label);
void button_press_effect(Fl_Widget* w, void* data);
void hide_extra_buttons(std::initializer_list<Fl_Button*> buttons);
Fl_Button* create_button(int x, int y, int w, int h, const char* label, int id);
Fl_Group* create_panel(int x, int y, int w, int h, const char* label_text);
void create_main_window();

#endif
