//
//  Particle.cpp
//  myChasing
//
//  Created by 杉本 直也 on 2014/05/29.
//
//

#include "Particle.h"

Particle::Particle(){
    radius = 1;
}

void Particle::setup(ofVec2f _position,ofVec2f _velocity){
    position = _position;
    velocity = _velocity;
}

void Particle::update(){
    ofVec2f direction;
    ofVec2f acceleration;
    //velocity Max
    float vMax = 10;
    
    //compute direction
    direction = destination - position;
    
    //normalize the vector
    direction.normalize();
    
    if (destination.x != 0 || destination.y != 0) {
        //scale
        direction.scale(0.5);
        acceleration = direction;
        
        velocity += acceleration;
        velocity.limit(vMax);
        position += velocity;
    }else{
        position += velocity;
    }

}

void Particle::draw(){
    ofCircle(position.x, position.y, radius);
}

void Particle::getDestinaiton(float mouseX,float mouseY){
    destination.set(mouseX,mouseY);
}