// IFT3100H22_Triptyque/renderer.h
// Classe responsable du rendu de l'application.

#pragma once

#include "ofMain.h"

class Renderer
{
public:

  ofImage image_source;

  ofImage image_left;
  ofImage image_center;
  ofImage image_right;

  ofShader shader;

  int image_width;
  int image_height;

  int offset_vertical;
  int offset_horizontal;

  bool filter;

  void setup();
  void draw();
};
