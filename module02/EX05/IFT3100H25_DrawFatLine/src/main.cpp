// IFT3100H25_DrawFatLine/main.cpp
// Démonstration de deux algorithmes de rastérisation de ligne (DDA et Bresenham).

#include "ofMain.h"
#include "application.h"

int main()
{
  ofSetupOpenGL(512, 512, OF_WINDOW);
  ofRunApp(new Application());
}
