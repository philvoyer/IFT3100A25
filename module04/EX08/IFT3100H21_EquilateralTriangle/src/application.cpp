// IFT3100H21_EquilateralTriangle/application.cpp
// Classe principale de l'application.

#include "application.h"

void Application::setup()
{
  ofSetWindowTitle("triangle équilatéral");

  renderer.setup();
}

void Application::update()
{
  renderer.update();
}

void Application::draw()
{
  renderer.draw();
}

void Application::exit()
{
  ofLog() << "<app::exit>";
}
