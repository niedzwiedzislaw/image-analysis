//
// Created by Kuba Sławiński on 11/10/2013.
// Copyright (c) 2013 Kuba Sławiński. All rights reserved.
//
// To change the template use AppCode | Preferences | File Templates.
//



#ifndef __App_H_
#define __App_H_

#include <iostream>
#include <vector>
#include <stdio.h>
#include <math.h>

#include <opencv/cv.h>
#include <opencv/highgui.h>
#import "LinearTransformation.h"
#import "ImageWindow.h"

class ImageWindow;
class App {
    static const bool logLevel = 2;
    bool done;
    std::vector<ImageWindow*> windows;

    public:
    App();

    void run();

    void catchAction();

    void registerWindow(ImageWindow *window);

    static void debug(const char* message);
};


#endif //__App_H_