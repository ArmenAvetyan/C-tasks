#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Scroll.H>
#include <FL/Fl_Box.H>
#include <initializer_list>
#include <cstdlib>
#include <cstdio>
#include "HMS.h"

//for nuber saveing
int number1 = 0;
int number2 = 0;

//for extra button
Fl_Box* grade = nullptr;
Fl_Input* input1 = nullptr;
Fl_Input* input2 = nullptr;
Fl_Box* box1 = nullptr;
Fl_Box* box2 = nullptr;
Fl_Box* result_box = nullptr;
Fl_Button* confirm_btn = nullptr;

// Main window
Fl_Window* main_window = nullptr;
Fl_Box* welcome_label = nullptr;

// Panels
Fl_Group* panel1 = nullptr;
Fl_Group* panel2 = nullptr;
Fl_Group* panel3 = nullptr;
Fl_Group* panel4 = nullptr;
Fl_Group* panel5 = nullptr;

// Extra buttons
//1
Fl_Button* extra_btn1_1 = nullptr;
Fl_Button* extra_btn1_2 = nullptr;
Fl_Button* extra_btn1_3 = nullptr;
Fl_Button* extra_btn1_4 = nullptr;
Fl_Button* extra_btn1_5 = nullptr;
//2
Fl_Button* extra_btn2_1 = nullptr;
Fl_Button* extra_btn2_2 = nullptr;
//3
Fl_Button* extra_btn3_1 = nullptr;
Fl_Button* extra_btn3_2 = nullptr;
Fl_Button* extra_btn3_3 = nullptr;
Fl_Button* extra_btn3_4 = nullptr;
Fl_Button* extra_btn3_5 = nullptr;
Fl_Button* extra_btn3_6 = nullptr;
//4
Fl_Button* extra_btn4_1 = nullptr;
Fl_Button* extra_btn4_2 = nullptr;
Fl_Button* extra_btn4_3 = nullptr;
Fl_Button* extra_btn4_4 = nullptr;
// 5
Fl_Button* extra_btn5_1 = nullptr;
Fl_Button* extra_btn5_2 = nullptr;
Fl_Button* extra_btn5_3 = nullptr;

// Button callbacks
void show_only_panel(Fl_Group* target) {
    panel1->hide();
    panel2->hide();
    panel3->hide();
    panel4->hide();
    panel5->hide();

    target->show();
}

//for hide with case
void hide_extra_widgets() {
    if (input1) input1->hide();                                                 
    if (input2) input2->hide();                                                 
    if (grade) grade->hide();                                                   
    if (box1) box1->hide();                                                     
    if (box2) box2->hide(); 
    if (confirm_btn) confirm_btn->hide();
}

//for confrim grades
void confirm_callback(Fl_Widget* w, void*) {
    
    //convert to int
    number1 = std::atoi(input1->value());
    number2 = std::atoi(input2->value());

    // hide inputs
    if (input1) input1->hide();
    if (input2) input2->hide();
    if (grade) grade->hide();
    if (box1) box1->hide();
    if (box2) box2->hide();

    char buf[100];
    snprintf(buf, sizeof(buf), "Entered numbers: %d, %d", number1, number2);
    result_box->label(buf);
    result_box->redraw();

    int sum = number1 + number2;

    if (number1 >= 8 && number1 <= 20 && number2 >= 8 && number2 <= 20) {
        //create new window
        Fl_Window* congrats_win = new Fl_Window(300, 150, "ՇՆՈՐՀԱՎՈՐԱՆՔ");
        congrats_win->color(fl_rgb_color(0, 255, 98));
        Fl_Box* msg = new Fl_Box(50, 50, 200, 50, "Շնորհավորում եմ! ԴՈՒՔ ԸՆԴՈՒՆՎԵԼ ԵՔ!");
        msg->labelfont(FL_BOLD);
        msg->labelsize(14);
        msg->labelcolor(fl_rgb_color(0, 0, 0));

        congrats_win->end();
        congrats_win->show();
    } else if (number1 < 0 || number1 > 20 || number2 < 0 || number2 > 20) {
        Fl_Window* error = new Fl_Window(500, 200, "ՍԽԱԼ ՄՈՒՏՔ");
        error->color(fl_rgb_color(219, 88, 88));
        Fl_Box* err_msg = new Fl_Box(125, 50, 250, 50, "ՄՈՒՏՔԱԳՐՎԱԾ ՏՎՅԱԼՆԵՐԸ ՍԽԱԼ ԵՆ, ՓՈՐՁԵՔ ԿՐԿԻՆ!");
        err_msg->labelfont(FL_BOLD);
        err_msg->labelsize(14);
        err_msg->labelcolor(fl_rgb_color(0, 0, 0));

        error->end();
        error->show();
    } else if ((number1 < 8 && number1 > 0) || (number2 < 8 && number2 > 0)) {
        Fl_Window* no_win = new Fl_Window(300, 150, "ԱՆՀԱՋՈՂ ՔՆՆՈՒԹՅՈՒՆ");      
        no_win->color(fl_rgb_color(68, 212, 209));                              
        Fl_Box* msg_ = new Fl_Box(50, 50, 200, 50, "ՓՈՐՁԵՔ ՄԵԿ ԱՆԳԱՄ ԵՎՍ!");    
        msg_->labelfont(FL_BOLD);                                               
        msg_->labelsize(14);                                                    
        msg_->labelcolor(fl_rgb_color(0, 0, 0)); 

        no_win->end();
        no_win->show();
        }
        
    if (confirm_btn) confirm_btn->hide();
}

//extra button function
void extra_btn_func(Fl_Widget* widget, void* data) {
    hide_all_extra_buttons();

    Fl_Window* win = Fl::first_window();
    if (!win) return;
    win->begin();

    if (!grade) {
        grade = new Fl_Box(450, 90, 200, 30, "ԳՐԵՔ ՁԵՐ ԳՆԱՀԱՏԱԿԱՆԸ");
        grade->labelfont(FL_BOLD);
        grade->labelsize(16);
        grade->labelcolor(fl_rgb_color(255, 255, 255));
    } else {
        grade->show();
    }

    // Input space
    input1 = new Fl_Input(400, 150, 100, 30);
    input2 = new Fl_Input(400, 220, 100, 30);

    box1 = new Fl_Box(500, 150, 200, 30, "ԱՌԱՋԻՆ ԳՆԱՀԱՏԱԿԱՆ");
    box2 = new Fl_Box(500, 220, 200, 30, "ԵՐԿՐՈՐԴ ԳՆԱՀԱՏԱԿԱՆ");

    //data for input space
    confirm_btn = new Fl_Button(450, 280, 100, 30, "ՀԱՍՏԱՏԵԼ");
    confirm_btn->callback(confirm_callback);

    

    result_box = new Fl_Box(200, 200, 200, 30, ""); 

    win->end();
    win->redraw();
}

//hide all extra buttons
void hide_all_extra_buttons() {
    hide_extra_buttons({extra_btn1_1, extra_btn1_2, extra_btn1_3, extra_btn1_4, extra_btn1_5});
    hide_extra_buttons({extra_btn2_1, extra_btn2_2});                           
    hide_extra_buttons({extra_btn3_1, extra_btn3_2, extra_btn3_3, extra_btn3_4, extra_btn3_5, extra_btn3_6});
    hide_extra_buttons({extra_btn4_1, extra_btn4_2, extra_btn4_3, extra_btn4_4});
    hide_extra_buttons({extra_btn5_1, extra_btn5_2, extra_btn5_3});
}

//create extra button
Fl_Button* create_extra_button(int x, int y, int w, int h, const char* label) {
    Fl_Button* extra_btn = new Fl_Button(x, y, w, h, label);
    extra_btn->box(FL_NO_BOX);                                       
    extra_btn->labelcolor(fl_rgb_color(255, 255, 255));              
    extra_btn->labelfont(FL_ITALIC);                                 
    extra_btn->labelsize(14);                                        
    extra_btn->callback(extra_btn_func);
    extra_btn->labeltype(FL_NORMAL_LABEL);                           
    extra_btn->align(FL_ALIGN_CENTER | FL_ALIGN_WRAP);                  
    return extra_btn;
}


//button press effect
void button_press_effect(Fl_Widget* w, void* data) {
    Fl_Button* btn = (Fl_Button*)w;
    int id = (intptr_t)data; 

    // pressed
    btn->color(fl_rgb_color(75, 250, 255));
    btn->redraw();

    Fl::add_timeout(0.3, [](void* b){
        Fl_Button* btn = (Fl_Button*)b;
        btn->color(fl_rgb_color(0, 200, 255));
        btn->redraw();
    }, btn);

    //for hide extra buttons
    hide_extra_buttons({extra_btn1_1, extra_btn1_2, extra_btn1_3, extra_btn1_4, extra_btn1_5});
    hide_extra_buttons({extra_btn2_1, extra_btn2_2});
    hide_extra_buttons({extra_btn3_1, extra_btn3_2, extra_btn3_3, extra_btn3_4, extra_btn3_5, extra_btn3_6});
    hide_extra_buttons({extra_btn4_1, extra_btn4_2, extra_btn4_3, extra_btn4_4});
    hide_extra_buttons({extra_btn5_1, extra_btn5_2, extra_btn5_3});

    switch (id) {
        case 1: show_only_panel(panel1); 
                welcome_label->hide();
                hide_extra_widgets();
        if (!extra_btn1_1 && !extra_btn1_2 && !extra_btn1_3 && !extra_btn1_4 && !extra_btn1_5) {                  
            Fl_Window* win = Fl::first_window();                                
            if (!win) break;                                                    
            win->begin();                                                       
            extra_btn1_1 = create_extra_button(350, 120, 400, 50, "Ճարտարապետության տեսության, պատմության և ժառանգության ամբիոն");
            extra_btn1_2 = create_extra_button(350, 170, 400, 50, "Ճարտարապետական նախագծման և ճարտարապետական միջավայրի դիզայնի ամբիոն");
            extra_btn1_3 = create_extra_button(350, 220, 400, 50, "Քաղաքաշինության ամբիոն");
            extra_btn1_4 = create_extra_button(350, 270, 400, 50, "Գծագրության և համակարգչային գրաֆիկայի ամբիոն");
            extra_btn1_5 = create_extra_button(350, 320, 400, 50, "Գծանկարի, գունանկարի և քանդակի ամբիոն");

            win->end();                                                         
            win->redraw();                                                      
        } else {                                                                
            extra_btn1_1->show();                                               
            extra_btn1_2->show();                                               
            extra_btn1_3->show();   
            extra_btn1_4->show();
            extra_btn1_5->show();
        }
            break;
        case 2: show_only_panel(panel2);
                welcome_label->hide();
                hide_extra_widgets();
        if (!extra_btn2_1 && !extra_btn2_2) {                  
            Fl_Window* win = Fl::first_window();                                
            if (!win) break;                                                    
            win->begin();                                                       
            extra_btn2_1 = create_extra_button(350, 120, 400, 50, "Դիզայնի ամբիոն"); 
            extra_btn2_2 = create_extra_button(350, 170, 400, 50, "Ինտերիերի և էքստերիերի դիզայնի ամբիոն"); 
            win->end();                                                         
            win->redraw();                                                      
        } else {                                                                
            extra_btn2_1->show();                                               
            extra_btn2_2->show();                                               
        }
 
            break;
        case 3: show_only_panel(panel3); 
                welcome_label->hide();
                hide_extra_widgets();
        if (!extra_btn3_1 && !extra_btn3_2 && !extra_btn3_3 && !extra_btn3_4 && !extra_btn3_5 && !extra_btn3_6) {                  
            Fl_Window* win = Fl::first_window();                                
            if (!win) break;                                                    
            win->begin();                                                       
            extra_btn3_1 = create_extra_button(350, 120, 400, 50, "Շինարարական նյութերի, պատրաստվածքների և կոնստրուկցիաների արտադրության ամբիոն"); 
            extra_btn3_2 = create_extra_button(350, 170, 400, 50, "Շինարարական կոնստրուկցիաների ամբիոն"); 
            extra_btn3_3 = create_extra_button(350, 220, 400, 50, "Շինարարական արտադրության տեխնոլոգիայի և կազմակերպման ամբիոն"); 
            extra_btn3_4 = create_extra_button(350, 270, 400, 50, "Ջրային համակարգերի, հիդրոտեխնիկայի և հիդրոէներգետիկայի ամբիոն");
            extra_btn3_5 = create_extra_button(350, 320, 400, 50, "Ճանապարհների և կամուրջների ամբիոն");
            extra_btn3_6 = create_extra_button(350, 370, 400, 50, "Ջերմագազամատակարարման և օդափոխության ամբիոն");
            win->end();                                                         
            win->redraw();                                                      
        } else {                                                                
            extra_btn3_1->show();                                               
            extra_btn3_2->show();                                               
            extra_btn3_3->show();
            extra_btn3_4->show();
            extra_btn3_5->show();
            extra_btn3_6->show();
        }
            break;
        case 4: show_only_panel(panel4); 
                welcome_label->hide();
                hide_extra_widgets();
        if (!extra_btn4_1 && !extra_btn4_2 && !extra_btn4_3 && !extra_btn4_4) {                  
            Fl_Window* win = Fl::first_window();                                
            if (!win) break;                                                    
            win->begin();                                                       
            extra_btn4_1 = create_extra_button(350, 120, 400, 50, "Ինժեներական գեոդեզիայի ամբիոն"); 
            extra_btn4_2 = create_extra_button(350, 170, 400, 50, "Շինարարական մեքենաների և երթևեկության կազմակերպման ամբիոն"); 
            extra_btn4_3 = create_extra_button(350, 220, 400, 50, "Շրջակա միջավայրի կառավարման, տուրիզմի և սերվիսի ամբիոն"); 
            extra_btn4_4 = create_extra_button(350, 270, 400, 50, "Ֆիզիկական կուլտուրայի և սպորտի ամբիոն");
            win->end();                                                         
            win->redraw();                                                      
        } else {                                                                
            extra_btn4_1->show();                                               
            extra_btn4_2->show();                                               
            extra_btn4_3->show();       
            extra_btn4_4->show();
        }
            break;
        case 5: show_only_panel(panel5); 
                welcome_label->hide();
                hide_extra_widgets();
        if (!extra_btn5_1 && !extra_btn5_2 && !extra_btn5_3) {
            Fl_Window* win = Fl::first_window();
            if (!win) break;
            win->begin();
            extra_btn5_1 = create_extra_button(350, 120, 400, 50, "Էկոնոմիկայի, իրավունքի և կառավարման ամբիոն");
            extra_btn5_2 = create_extra_button(350, 170, 400, 50, "Ինֆորմատիկայի, հաշվողական տեխնիկայի և կառավարման համակարգերի ամբիոն");
            extra_btn5_3 = create_extra_button(350, 220, 400, 50, "Լեզուների ամբիոն");
            win->end();
            win->redraw();
        } else {
            extra_btn5_1->show();
            extra_btn5_2->show();
            extra_btn5_3->show();
        }
            break;
    }
}

//function to hide extra buttons
void hide_extra_buttons(std::initializer_list<Fl_Button*> buttons) {
    for (Fl_Button* btn : buttons) {
        if (btn) btn->hide();
    }
}

//create button in main window
Fl_Button* create_button(int x, int y, int w, int h, const char* label, int id) {
    Fl_Button* btn = new Fl_Button(x, y, w, h, label);
    btn->color(fl_rgb_color(0, 200, 255));
    btn->callback(button_press_effect, (void*)(intptr_t)id);
    btn->labelcolor(fl_rgb_color(250, 250, 250));
    btn->labelfont(FL_BOLD);
    btn->labelsize(14);
    btn->box(FL_ROUND_UP_BOX);
    return btn;
}

//create panel
Fl_Group* create_panel(int x, int y, int w, int h, const char* label_text) {
    Fl_Group* panel = new Fl_Group(x, y, w, h);
    panel->begin();

    Fl_Box* box = new Fl_Box(300, 30, 300, 25, label_text); // relative to panel
    box->labelsize(16);
    box->labelcolor(fl_rgb_color(255, 255, 255));
    box->labelfont(FL_BOLD);

    panel->end();
    panel->hide();
    return panel;
}

//main window
void create_main_window() {                                                     
    main_window = new Fl_Window(800, 500, "Academy Management System");                                                         
    main_window->color(fl_rgb_color(40, 40, 40));

    Fl_Scroll* scroll = new Fl_Scroll(0, 0, 800, 500);
    scroll->box(FL_FLAT_BOX);
    scroll->type(Fl_Scroll::BOTH);
int num1 = 0;
int num2 = 0;scroll->scrollbar.color(fl_rgb_color(40, 40, 40));
    scroll->color(fl_rgb_color(40, 40, 40));
    scroll->scrollbar.selection_color(fl_rgb_color(40, 40, 40)); 
    scroll->begin();

    welcome_label = new Fl_Box(200, 10, 400, 25, "ԸՆՏՐԵՔ ՁԵՐ ՍԻՐԵԼԻ ՖԱԿՈՒԼՏԵՏԸ!");         
    welcome_label->labelfont(FL_BOLD+FL_ITALIC);                                    
    welcome_label->labelsize(18);
    welcome_label->labelcolor(fl_rgb_color(255, 255, 255)); // RGB to Fl_Color

    panel1 = create_panel(150, 50, 430, 340, "ՃԱՐՏԱՐԱՊԵՏՈՒԹՅԱՆ ՖԱԿՈՒԼՏԵՏ");
    panel2 = create_panel(150, 50, 430, 340, "ԴԻԶԱՅՆԻ ՖԱԿՈՒԼՏԵՏ");
    panel3 = create_panel(150, 50, 430, 340, "ՇԻՆԱՐԱՐՈՒԹՅԱՆ ՖԱԿՈՒԼՏԵՏ");
    panel4 = create_panel(150, 50, 430, 340, "ՔԱՂԱՔԱՅԻՆ ՏՆՏԵՍՈՒԹՅԱՆ ԵՎ ԷԿՈԼՈԳԻԱՅԻ ՖԱԿՈՒԼՏԵՏ");
    panel5 = create_panel(150, 50, 430, 340, "ԿԱՌԱՎԱՐՄԱՆ ԵՎ ՏԵԽՆՈԼՈԳԻԱՅԻ ՖԱԿՈՒԼՏԵՏ");


    // Left menu buttons
    Fl_Button* btn1 = create_button(10, 80, 270, 40, "ՃԱՐՏԱՐԱՊԵՏՈՒԹՅԱՆ ՖԱԿՈՒԼՏԵՏ", 1);
    Fl_Button* btn2 = create_button(10, 150, 270, 40, "ԴԻԶԱՅՆԻ ՖԱԿՈՒԼՏԵՏ", 2);
    Fl_Button* btn3 = create_button(10, 220, 270, 40, "ՇԻՆԱՐԱՐՈՒԹՅԱՆ ՖԱԿՈՒԼՏԵՏ", 3);
    Fl_Button* btn4 = create_button(10, 290, 270, 40, "էԿՈԼՈԳԻԱՅԻ ՖԱԿՈՒԼՏԵՏ", 4);
    Fl_Button* btn5 = create_button(10, 360, 270, 40, "ՏԵԽՆՈԼՈԳԻԱՅԻ ՖԱԿՈՒԼՏԵՏ", 5);

    scroll->end();
    main_window->end();      // interier end
    main_window->show();
}
