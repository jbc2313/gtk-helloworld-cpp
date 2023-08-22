#include "helloworld.h"
#include <iostream>

HelloWorld::HelloWorld() 
: m_button_1("Hello World"),
  m_button_2("Gentoo Linux"),
  m_button_quit("Quit")
{
    set_title("Gtk::Grid"); 

    m_grid.set_margin(12);
    set_child(m_grid);

    m_grid.attach(m_button_1, 0,0);
    m_grid.attach(m_button_2, 1,0);
    m_grid.attach_next_to(m_button_quit, m_button_1, Gtk::PositionType::BOTTOM, 2, 1);


    //Sets the margin around the button
    //m_button.set_margin(10);

    // when the button is clicked(signaled), it will call the on_button_clicked()
    m_button_1.signal_clicked().connect(sigc::bind(sigc::mem_fun(*this,&HelloWorld::on_button_clicked), "Hello World"));

    m_button_2.signal_clicked().connect(sigc::bind(sigc::mem_fun(*this,&HelloWorld::on_button_clicked), "Gentoo Linux"));
   
    m_button_quit.signal_clicked().connect(sigc::mem_fun(*this, &HelloWorld::on_button_quit));
    
    //This packs the button into the window (a container)
    //set_child(m_button);
};

HelloWorld::~HelloWorld()
{


};

void HelloWorld::on_button_quit()
{
    hide();
};

void HelloWorld::on_button_clicked(const Glib::ustring& data)
{
    std::cout << data << std::endl;
};
