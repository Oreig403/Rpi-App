#ifndef RPI_APP_H
#define RPI_APP_H

#include <escher.h>
#include "rpi_controller.h"

namespace Rpi {

class App : public ::App {
public:
  class Descriptor : public ::App::Descriptor {
  public:
    I18n::Message name() override;
    I18n::Message upperName() override;
    const Image * icon() override;
  };
  class Snapshot : public ::App::Snapshot {
  public:
    Snapshot();
    App * unpack(Container * container) override;
    void reset() override;
    Descriptor * descriptor() override;
  };
private:
  App(Snapshot * snapshot);
  rpiController m_rpiController;
};

}

#endif

/** 
 * This is the app file, it allows you to to add a name, some description, an icon to your app, but also your logic (controller) and your view 
 * It follows an MVC pattern -> Model-View-Controler. The app file allows you to link all the MVC files
 * This file is linked to the C++ view (app.cpp here). All files are linked -> app files.
**/
