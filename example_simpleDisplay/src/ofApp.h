#pragma once

#include "ofMain.h"
#include "ofxSimpleFloatingGui.h"

class ofApp: public ofBaseApp{
	public:
		void setup();
		void update();
        void draw();

        // GUI variables
        SliderA     sliderTypeA;
        SliderB     sliderTypeB;
        TextField   textField;
        Toggle      toggleButton;
        Button      button;
        Button      button2;
		DropDown	dropdown;
		vector<string> dropDownList;
		int			currIndInDropDown;

        // font variables
        ofTrueTypeFont font1, font2;
};
