//
//  stars.cpp
//  solarsystem
//
#include "stars.hpp"

#define PI 3.1415926535

Star::Star(GLfloat radius, GLfloat distance,
           GLfloat speed,  GLfloat selfSpeed,
           Star* parentStar) {
    // TODO:
}

void Star::drawStar() {
    // TODO:
}

void Star::update(long timeSpan) {
    // TODO:
}


Planet::Planet(GLfloat radius, GLfloat distance,
               GLfloat speed,  GLfloat selfSpeed,
               Star* parentStar, GLfloat rgbColor[3]) :
Star(radius, distance, speed, selfSpeed, parentStar) {
    // TODO:
}

void Planet::drawPlanet() {
    // TODO:
}

LightPlanet::LightPlanet(GLfloat radius,    GLfloat distance, GLfloat speed,
                         GLfloat selfSpeed, Star* parentStar,   GLfloat rgbColor[3]) :
Planet(radius, distance, speed, selfSpeed, parentStar, rgbColor) {
    // TODO:
}

void LightPlanet::drawLight() {
    // TODO:
}