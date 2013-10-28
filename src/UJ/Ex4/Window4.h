//
// Created by Kuba Sławiński on 25/10/2013.
// Copyright (c) 2013 Kuba Sławiński. All rights reserved.
//



#include "CameraCaptureWindow.h"
#include "CameraFilterWindow.h"
#include "SharpenWithMatrix.h"
#include "Lightness.h"

#ifndef __Window4_H_
#define __Window4_H_

class Window4 : public CameraFilterWindow {
    bool record;

public:

    Window4();

    virtual void control(char key) override;


    virtual void postprocess(cv::Mat &image) override;
};


#endif //__Window4_H_