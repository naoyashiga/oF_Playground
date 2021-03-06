#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetVerticalSync(true);
	ofSetFrameRate(60);
	ofBackground(0, 0, 0);
    
    float initSpeed = 10;
    
    for(int i = 0;i < 10000;i++){
        Particle myParticle;
        
        myParticle.setup(ofVec2f(ofGetWidth() / 2, ofGetWidth() / 2),ofVec2f(ofRandom(-initSpeed,initSpeed),ofRandom(-initSpeed,initSpeed)));
        particles.push_back(myParticle);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0;i < particles.size();i++){
        particles[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255);
    for(int i = 0;i < particles.size();i++){
        particles[i].draw();
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    for(int i = 0;i < particles.size();i++){
        particles[i].getDestinaiton(x,y);
    }
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
