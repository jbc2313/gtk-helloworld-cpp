#include "helloworld.h"
#include <iostream>

HelloWorld::HelloWorld() : m_button("Hello World")
{
    //Sets the margin around the button
    m_button.set_margin(10);

    // when the button is clicked(signaled), it will call the on_button_clicked()
    m_button.signal_clicked().connect(sigc::mem_fun(*this,
                &HelloWorld::on_button_clicked));

    //This packs the button into the window (a container)
    set_child(m_button);
};

HelloWorld::~HelloWorld()
{


};

void HelloWorld::on_button_clicked()
{
    std::cout << "Hello World!" << std::endl;
};
