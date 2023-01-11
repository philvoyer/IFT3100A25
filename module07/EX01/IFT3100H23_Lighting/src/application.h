// IFT3100H23_Lighting/application.h
// Classe principale de l'application.

#pragma once

#include "ofMain.h"

#include "renderer.h"

class Application : public ofBaseApp
{
public:

  Renderer renderer;

  float time_current;
  float time_last;
  float time_elapsed;

  bool is_key_press_up;
  bool is_key_press_down;
  bool is_key_press_left;
  bool is_key_press_right;

  Application();

  void setup();

  void update();

  void draw();

  void keyPressed(int key);

  void keyReleased(int key);

  void mouseReleased(int x, int y, int button);

  void windowResized(int w, int h);

  void exit();
};
