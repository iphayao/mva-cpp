#include "cinder/app/AppBasic.h"
#include <list>

using namespace ci;
using namespace ci::app;
using namespace std;

// We'll create a new Cinder Application by deriving from the AppBasic class
class BasicApp : public AppBasic {
public:
	void mouseDrag(MouseEvent event);
	void keyDown(KeyEvent event);
	void draw();

	// This will maintain a list of points which we will draw line segment between
	list<Vec2f> mPoints;
};


void BasicApp::mouseDrag(MouseEvent event) {
	mPoints.push_back(event.getPos());
}

void BasicApp::keyDown(KeyEvent event) {
	if (event.getChar() == 'f') {
		setFullScreen(!isFullScreen());
	}
}

void BasicApp::draw() {
	gl::clear(Color(0.1f, 0.1f, 0.15f));
	gl::color(Color(0.1f, 0.5f, 0.25f));
}

CINDER_APP_BASIC(BasicApp, RendererGl);

