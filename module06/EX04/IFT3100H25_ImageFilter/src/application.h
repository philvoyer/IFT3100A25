// IFT3100H25_ImageFilter/application.h
// Classe principale de l'application.

#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "renderer.h"

class Application : public ofBaseApp
{
public:

  Renderer renderer;

  ofxPanel gui;

  ofParameter<ofColor> color_picker;
  ofParameter<float> slider_tint_mix;
  ofParameter<float> slider_opacity;

  void setup();
  void update();
  void draw();
  void exit();

  void dragEvent(ofDragInfo dragInfo);
};
