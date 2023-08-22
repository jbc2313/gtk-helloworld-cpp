#ifndef GTKMM_EXAMPLE_HELLOWORLD_H
#define GTKMM_EXAMPLE_HELLOWORLD_H

#include <gtkmm/button.h>
#include <gtkmm/window.h>
#include <gtkmm/grid.h>

class HelloWorld : public Gtk::Window
{

    public:
      HelloWorld();
      //~HelloWorld() override; // original way shown
      virtual ~HelloWorld(); // this is from later in gtkmm doc

    protected:
      //Signal handlers:
    
      //void on_button_clicked(const Glib::ustring& data); // single button
      void on_button_clicked(const Glib::ustring& data);
      void on_button_quit();

      //Member widgets:
      Gtk::Grid m_grid;
      Gtk::Button m_button_1, m_button_2, m_button_quit;
};

#endif // GTKMM_EXAMPLE_HELLOWORLD_H
