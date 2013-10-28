//
// Created by Kuba Sławiński on 25/10/2013.
// Copyright (c) 2013 Kuba Sławiński. All rights reserved.
//



#include "DisplayWindow.h"
#include "FilterWindow.h"

#ifndef __CameraFilterWindow_H_
#define __CameraFilterWindow_H_


class CameraFilterWindow : public FilterWindow {
    int number;
    SynchronizedVideoCapture *capture;
protected:
    cv::VideoWriter *writer;
    bool record;

public:
    CameraFilterWindow(const char* title, Transformation* transformation);

    virtual void show() override;

    virtual ~CameraFilterWindow();
};


#endif //__CameraFilterWindow_H_