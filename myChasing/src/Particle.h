//
//  Particle.h
//  myChasing
//
//  Created by 杉本 直也 on 2014/05/29.
//
//

#ifndef __myVectorField3__Particle__
#define __myVectorField3__Particle__

#include <iostream>
#include "ofMain.h"

class Particle{
public:
    Particle();
    
    void setup(ofVec2f _position,ofVec2f _velocity);
    void update();
    void draw();
    
    void getDestinaiton(float mouseX,float mouseY);
    
    float radius;
    ofVec2f position;
    ofVec2f velocity;
    ofVec2f destination;
};

#endif /* defined(__myVectorField3__Particle__) */
