#pragma once

#include "CCLayer.h"

class MoreOptionsLayer : cocos2d::CCLayer
{
public:
    virtual bool init();

    int addToggle(const char* display, const char* key, const char* extraInfo);
};